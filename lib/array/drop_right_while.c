#include "drop_right_while.h"

#include "../_internals/internals.h"

napi_value lodash_drop_right_while(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value value;

  // TODO

  status = napi_create_string_utf8(env, "Method \"lodash_drop_right_while\" hasn't been implemented yet.", NAPI_AUTO_LENGTH, &value);
  STATUS_CHECK

  return value;
}
