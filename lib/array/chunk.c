#include "chunk.h"

#include "../_internals/internals.h"

napi_value lodash_chunk(napi_env env, napi_callback_info info) {
  napi_status status;

  size_t argc = 2;
  napi_value args[2];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  STATUS_CHECK

  if (argc < 2) {
    napi_throw_type_error(env, NULL, WRONG_ARGUMENTS_ERROR);
    return NULL;
  }

  if (!is_array(env, args[0])) {
    napi_throw_type_error(env, NULL, "First argument should be an array");
    return NULL;
  }

  napi_valuetype valuetype1;
  status = napi_typeof(env, args[1], &valuetype1);
  STATUS_CHECK

  if (valuetype1 != napi_number) {
    napi_throw_type_error(env, NULL, "Second argument should be a number");
    return NULL;
  }

  napi_value array = args[0];

  uint32_t length;
  status = napi_get_array_length(env, array, &length);
  STATUS_CHECK

  int32_t size_value;
  status = napi_get_value_int32(env, args[1], &size_value);
  STATUS_CHECK
  size_t size = MAX(size_value, 0);

  size_t index = 0;
  size_t rindex = 0;

  napi_value result;
  status = napi_create_array(env, &result);
  STATUS_CHECK

  while (index < length) {
    size_t i = index + size;
    napi_value s = array_slice(env, array, length, index, i);
    status = napi_set_element(env, result, rindex, s);
    STATUS_CHECK
    rindex++;
    index = i;
  }

  return result;
}
