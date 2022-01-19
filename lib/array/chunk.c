#include "chunk.h"

#include "../_internals/internals.h"

napi_value chunk(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value value;

  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  STATUS_CHECK

  if (argc < 1) {
    napi_throw_type_error(env, NULL, "Wrong number of arguments");
    return NULL;
  }

  napi_valuetype valuetype0;
  status = napi_typeof(env, args[0], &valuetype0);
  STATUS_CHECK

  bool is_array = 0;
  status = napi_is_array(env, args[0], &is_array);
  STATUS_CHECK

  if (!is_array) {
    napi_throw_type_error(env, NULL, "Wrong arguments");
    return NULL;
  }

  napi_value array;
  status = napi_create_array(env, &array);
  STATUS_CHECK

  status = napi_set_element(env, array, 0, args[0]);
  STATUS_CHECK

  return array;
}
