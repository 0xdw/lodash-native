#include "internals.h"

bool is_array(napi_env env, napi_value value) {
  bool _is_array = false;
  napi_status status = napi_is_array(env, value, &_is_array);
  if (status != napi_ok) return false;
  return _is_array;
}

napi_value array_slice(napi_env env, napi_value array, size_t length,
                       size_t from, size_t to) {
  napi_value value;
  NODE_API_CALL(env, napi_create_array(env, &value));

  size_t ii = 0;
  napi_value n;
  for (size_t i = from; i < to && i < length; i++) {
    NODE_API_CALL(env, napi_get_element(env, array, i, &n));
    NODE_API_CALL(env, napi_set_element(env, value, ii, n));
    ii++;
  }

  return value;
}
