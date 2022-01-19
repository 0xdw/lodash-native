#include <assert.h>
#include <node_api.h>

#include "../lib/lodash.h"

static int property_count = 1;

#define DECLARE_WITH_STATUS_CHECK(name, func) \
  napi_property_descriptor chunk_desc = { name, 0, func, 0, 0, 0, napi_default, 0 }; \
  status = napi_define_properties(env, exports, property_count, &chunk_desc); \
  assert(status == napi_ok); \
  property_count++;

static napi_value Init(napi_env env, napi_value exports) {
  napi_status status;

  DECLARE_WITH_STATUS_CHECK("chunk", chunk)

  return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)