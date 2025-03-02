#include "chunk.h"

#include "../_internals/internals.h"

napi_value lodash_chunk(napi_env env, napi_callback_info info) {
  size_t argc = 2;
  napi_value args[2];
  NODE_API_CALL(env, napi_get_cb_info(env, info, &argc, args, NULL, NULL));

  napi_value result;
  NODE_API_CALL(env, napi_create_array(env, &result));

  if (argc < 1) return result;

  napi_value array_arg = args[0];
  napi_value size_arg = args[1];

  if (!is_array(env, array_arg)) {
    napi_throw_type_error(env, NULL, "First argument should be an array");
    return NULL;
  }

  napi_valuetype valuetype1;
  NODE_API_CALL(env, napi_typeof(env, size_arg, &valuetype1));

  if (valuetype1 != napi_number) return result;

  uint32_t length;
  NODE_API_CALL(env, napi_get_array_length(env, array_arg, &length));

  int32_t size_value;
  NODE_API_CALL(env, napi_get_value_int32(env, size_arg, &size_value));
  size_t size = MAX(size_value, 0);

  if (size < 1 || length < 1) return result;

  size_t index = 0;
  size_t rindex = 0;

  while (index < length) {
    size_t i = index + size;
    napi_value s = array_slice(env, array_arg, length, index, i);
    NODE_API_CALL(env, napi_set_element(env, result, rindex++, s));
    index = i;
  }

  return result;
}
