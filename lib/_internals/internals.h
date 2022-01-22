#ifndef INTERNALS_H
#define INTERNALS_H

#include <assert.h>
#include <node_api.h>

#include "error_messages.h"

#define STATUS_CHECK assert(status == napi_ok);

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

bool is_array(napi_env env, napi_value value);
napi_value array_slice(napi_env env, napi_value array, size_t length,
                       size_t from, size_t to);

#endif
