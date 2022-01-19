#include "chunk.h"

napi_value chunk(napi_env env, napi_callback_info info) {
  napi_status status;
  napi_value value;

  const char* string = "Working fine";
  status = napi_create_string_utf8(env, string, strlen(string), &value);
  assert(status == napi_ok);

  return value;
}