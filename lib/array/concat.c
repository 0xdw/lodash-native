#include "concat.h"

#include "../_internals/internals.h"

#define MAX_ARGUMENTS 10

napi_value lodash_concat(napi_env env, napi_callback_info info) {
  size_t argc = MAX_ARGUMENTS;
  napi_value args[MAX_ARGUMENTS];
  NODE_API_CALL(env, napi_get_cb_info(env, info, &argc, args, NULL, NULL));

  if (argc < 1) {
    napi_throw_type_error(env, NULL, WRONG_ARGUMENTS_ERROR);
    return NULL;
  }

  if (argc < 2) {
    napi_value cloned_array;
    NODE_API_CALL(env, napi_create_array(env, &cloned_array));
    if (is_array(env, args[0])) {
      uint32_t length;
      NODE_API_CALL(env, napi_get_array_length(env, args[0], &length));
      for (size_t i = 0; i < length; i++) {
        napi_value element;
        NODE_API_CALL(env, napi_get_element(env, args[0], i, &element));
        NODE_API_CALL(env, napi_set_element(env, cloned_array, i, element));
      }
    } else {
      NODE_API_CALL(env, napi_set_element(env, cloned_array, 0, args[0]));
    }
    return cloned_array;
  }

  napi_value output_array;
  NODE_API_CALL(env, napi_create_array(env, &output_array));

  uint32_t result_index = 0;
  for (size_t i = 0; i < argc; i++) {
    napi_value value = args[i];
    if (is_array(env, value)) {
      uint32_t length;
      NODE_API_CALL(env, napi_get_array_length(env, value, &length));
      for (size_t ii = 0; ii < length; ii++) {
        napi_value sub_value;
        NODE_API_CALL(env, napi_get_element(env, value, ii, &sub_value));
        NODE_API_CALL(env, napi_set_element(env, output_array, result_index++,
                                            sub_value));
      }
    } else {
      NODE_API_CALL(env,
                    napi_set_element(env, output_array, result_index++, value));
    }
  }

  return output_array;
}
