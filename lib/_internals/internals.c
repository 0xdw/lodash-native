#include "internals.h"

bool is_array(napi_env env, napi_value value) {
  bool _is_array = 0;
  napi_status status = napi_is_array(env, value, &_is_array);
  STATUS_CHECK
  return _is_array;
}

napi_value array_slice(napi_env env, napi_value array, size_t length,
                       size_t from, size_t to) {
  napi_status status;

  napi_value value;
  status = napi_create_array(env, &value);
  STATUS_CHECK

  size_t ii = 0;
  for (size_t i = from; i < to && i < length; i++) {
    napi_value n;
    status = napi_get_element(env, array, i, &n);
    STATUS_CHECK
    status = napi_set_element(env, value, ii, n);
    STATUS_CHECK
    ii++;
  }

  return value;
}
