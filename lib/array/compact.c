#include "compact.h"

#include "../_internals/internals.h"

napi_value lodash_compact(napi_env env, napi_callback_info info) {
  napi_status status;

  size_t argc = 1;
  napi_value args[1];
  status = napi_get_cb_info(env, info, &argc, args, NULL, NULL);
  STATUS_CHECK

  if (argc < 1) {
    napi_throw_type_error(env, NULL, WRONG_ARGUMENTS_ERROR);
    return NULL;
  }

  if (!is_array(env, args[0])) {
    napi_throw_type_error(env, NULL, "First argument should be an array");
    return NULL;
  }

  uint32_t length;
  status = napi_get_array_length(env, args[0], &length);
  STATUS_CHECK

  napi_value array = args[0];

  napi_value output_array;
  status = napi_create_array_with_length(env, NAPI_AUTO_LENGTH, &output_array);
  STATUS_CHECK

  uint32_t result_index = 0;

  for (size_t i = 0; i < length; i++) {
    napi_value value;
    status = napi_get_element(env, array, i, &value);
    STATUS_CHECK

    napi_valuetype type;
    status = napi_typeof(env, value, &type);
    STATUS_CHECK
    // https://developer.mozilla.org/en-US/docs/Glossary/Falsy
    // false, 0, -0, 0n, "", '', ``, null, undefined, NaN

    if (type == napi_boolean) {
      bool result;
      status = napi_get_value_bool(env, value, &result);
      STATUS_CHECK
      if (result == false) continue;
    }

    // Non-finite number values (NaN, +Infinity, or -Infinity) set the result to
    // zero.
    if (type == napi_number) {
      int32_t number;
      status = napi_get_value_int32(env, value, &number);
      STATUS_CHECK
      if (number == 0 || number == -0) continue;
    }

    if (type == napi_bigint) {
      int64_t number;
      bool loss_less;
      status = napi_get_value_bigint_int64(env, value, &number, &loss_less);
      STATUS_CHECK
      if (number == 0) continue;
    }

    char* str_buffer;
    bool str_found = false;
    if (type == napi_string) {
      size_t str_buffer_size;
      status =
          napi_get_value_string_utf8(env, value, NULL, 0, &str_buffer_size);
      STATUS_CHECK

      str_buffer = (char*)malloc(str_buffer_size + 1);
      size_t str_result;
      status = napi_get_value_string_utf8(env, value, str_buffer,
                                          str_buffer_size + 1, &str_result);
      STATUS_CHECK

      str_found = true;
      if (*str_buffer == '\0') {
        free(str_buffer);
        str_found = false;
        continue;
      }
    }

    if (type == napi_null || type == napi_undefined) continue;

    status = napi_set_element(env, output_array, result_index, value);
    STATUS_CHECK
    result_index++;
    if (str_found) {
      str_found = false;
      free(str_buffer);
    }
  }

  return output_array;
}
