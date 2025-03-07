#ifndef INTERNALS_H
#define INTERNALS_H

#include <assert.h>
#include <node_api.h>

#include "error_messages.h"

#define STATUS_CHECK assert(status == napi_ok);

#define GET_AND_THROW_LAST_ERROR(env)                                \
  do {                                                               \
    const napi_extended_error_info* error_info;                      \
    napi_get_last_error_info((env), &error_info);                    \
    bool is_pending;                                                 \
    const char* err_message = error_info->error_message;             \
    napi_is_exception_pending((env), &is_pending);                   \
    /* If an exception is already pending, don't rethrow it */       \
    if (!is_pending) {                                               \
      const char* error_message =                                    \
          err_message != NULL ? err_message : "empty error message"; \
      napi_throw_error((env), NULL, error_message);                  \
    }                                                                \
  } while (0)

#define NODE_API_CALL_BASE(env, the_call, ret_val) \
  do {                                             \
    if ((the_call) != napi_ok) {                   \
      GET_AND_THROW_LAST_ERROR((env));             \
      return ret_val;                              \
    }                                              \
  } while (0)

// Returns NULL if the_call doesn't return napi_ok.
#define NODE_API_CALL(env, the_call) NODE_API_CALL_BASE(env, the_call, NULL)

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

bool is_array(napi_env env, napi_value value);
napi_value array_slice(napi_env env, napi_value array, size_t length,
                       size_t from, size_t to);

#endif
