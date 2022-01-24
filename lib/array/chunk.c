#include "chunk.h"

#include "../_internals/internals.h"

napi_value lodash_chunk(napi_env env, napi_callback_info info) {
  size_t argc = 2;
  napi_value args[2];
  NODE_API_CALL(env, napi_get_cb_info(env, info, &argc, args, NULL, NULL));

  if (argc < 2) {
    napi_throw_type_error(env, NULL, WRONG_ARGUMENTS_ERROR);
    return NULL;
  }

  if (!is_array(env, args[0])) {
    napi_throw_type_error(env, NULL, "First argument should be an array");
    return NULL;
  }

  napi_valuetype valuetype1;
  NODE_API_CALL(env, napi_typeof(env, args[1], &valuetype1));

  if (valuetype1 != napi_number) {
    napi_throw_type_error(env, NULL, "Second argument should be a number");
    return NULL;
  }

  napi_value array = args[0];

  uint32_t length;
  NODE_API_CALL(env, napi_get_array_length(env, array, &length));

  int32_t size_value;
  NODE_API_CALL(env, napi_get_value_int32(env, args[1], &size_value));
  size_t size = MAX(size_value, 0);

  size_t index = 0;
  size_t rindex = 0;

  napi_value result;
  NODE_API_CALL(env, napi_create_array(env, &result));

  while (index < length) {
    size_t i = index + size;
    napi_value s = array_slice(env, array, length, index, i);
    NODE_API_CALL(env, napi_set_element(env, result, rindex++, s));
    index = i;
  }

  return result;
}
