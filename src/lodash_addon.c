#include <assert.h>
#include <node_api.h>

#include "../lib/lodash.h"

#define DECLARE_NAPI_METHOD(name, func) \
  { name, 0, func, 0, 0, 0, napi_default, 0 }

#define DECLARE_WITH_STATUS_CHECK(size, name, func)                       \
  napi_property_descriptor func##_desc = DECLARE_NAPI_METHOD(name, func); \
  status = napi_define_properties(env, exports, size, &func##_desc);      \
  assert(status == napi_ok);

static napi_value Init(napi_env env, napi_value exports) {
  napi_status status;

  DECLARE_WITH_STATUS_CHECK(1, "chunk", lodash_chunk)
  DECLARE_WITH_STATUS_CHECK(1, "compact", lodash_compact)
  DECLARE_WITH_STATUS_CHECK(1, "concat", lodash_concat)
  DECLARE_WITH_STATUS_CHECK(1, "difference", lodash_difference)
  DECLARE_WITH_STATUS_CHECK(1, "difference_by", lodash_difference_by)
  DECLARE_WITH_STATUS_CHECK(1, "difference_with", lodash_difference_with)
  DECLARE_WITH_STATUS_CHECK(1, "drop", lodash_drop)
  DECLARE_WITH_STATUS_CHECK(1, "drop_right", lodash_drop_right)
  DECLARE_WITH_STATUS_CHECK(1, "drop_right_while", lodash_drop_right_while)
  DECLARE_WITH_STATUS_CHECK(1, "drop_while", lodash_drop_while)
  DECLARE_WITH_STATUS_CHECK(1, "fill", lodash_fill)
  DECLARE_WITH_STATUS_CHECK(1, "find_index", lodash_find_index)
  DECLARE_WITH_STATUS_CHECK(1, "find_last_index", lodash_find_last_index)
  DECLARE_WITH_STATUS_CHECK(1, "flatten", lodash_flatten)
  DECLARE_WITH_STATUS_CHECK(1, "flatten_deep", lodash_flatten_deep)
  DECLARE_WITH_STATUS_CHECK(1, "flatten_depth", lodash_flatten_depth)
  DECLARE_WITH_STATUS_CHECK(1, "from_pairs", lodash_from_pairs)
  DECLARE_WITH_STATUS_CHECK(1, "head", lodash_head)
  DECLARE_WITH_STATUS_CHECK(1, "index_of", lodash_index_of)
  DECLARE_WITH_STATUS_CHECK(1, "initial", lodash_initial)
  DECLARE_WITH_STATUS_CHECK(1, "intersection", lodash_intersection)
  DECLARE_WITH_STATUS_CHECK(1, "intersection_by", lodash_intersection_by)
  DECLARE_WITH_STATUS_CHECK(1, "intersection_with", lodash_intersection_with)
  DECLARE_WITH_STATUS_CHECK(1, "join", lodash_join)
  DECLARE_WITH_STATUS_CHECK(1, "last", lodash_last)
  DECLARE_WITH_STATUS_CHECK(1, "last_index_of", lodash_last_index_of)
  DECLARE_WITH_STATUS_CHECK(1, "nth", lodash_nth)
  DECLARE_WITH_STATUS_CHECK(1, "pull", lodash_pull)
  DECLARE_WITH_STATUS_CHECK(1, "pull_all", lodash_pull_all)
  DECLARE_WITH_STATUS_CHECK(1, "pull_all_by", lodash_pull_all_by)
  DECLARE_WITH_STATUS_CHECK(1, "pull_all_with", lodash_pull_all_with)
  DECLARE_WITH_STATUS_CHECK(1, "pull_at", lodash_pull_at)
  DECLARE_WITH_STATUS_CHECK(1, "remove", lodash_remove)
  DECLARE_WITH_STATUS_CHECK(1, "reverse", lodash_reverse)
  DECLARE_WITH_STATUS_CHECK(1, "slice", lodash_slice)
  DECLARE_WITH_STATUS_CHECK(1, "sorted_index", lodash_sorted_index)
  DECLARE_WITH_STATUS_CHECK(1, "sorted_index_by", lodash_sorted_index_by)
  DECLARE_WITH_STATUS_CHECK(1, "sorted_index_of", lodash_sorted_index_of)
  DECLARE_WITH_STATUS_CHECK(1, "sorted_last_index", lodash_sorted_last_index)
  DECLARE_WITH_STATUS_CHECK(1, "sorted_last_index_by", lodash_sorted_last_index_by)
  DECLARE_WITH_STATUS_CHECK(1, "sorted_last_index_of", lodash_sorted_last_index_of)
  DECLARE_WITH_STATUS_CHECK(1, "sorted_uniq", lodash_sorted_uniq)
  DECLARE_WITH_STATUS_CHECK(1, "sorted_uniq_by", lodash_sorted_uniq_by)
  DECLARE_WITH_STATUS_CHECK(1, "tail", lodash_tail)
  DECLARE_WITH_STATUS_CHECK(1, "take", lodash_take)
  DECLARE_WITH_STATUS_CHECK(1, "take_right", lodash_take_right)
  DECLARE_WITH_STATUS_CHECK(1, "take_right_while", lodash_take_right_while)
  DECLARE_WITH_STATUS_CHECK(1, "take_while", lodash_take_while)
  DECLARE_WITH_STATUS_CHECK(1, "union", lodash_union)
  DECLARE_WITH_STATUS_CHECK(1, "union_by", lodash_union_by)
  DECLARE_WITH_STATUS_CHECK(1, "union_with", lodash_union_with)
  DECLARE_WITH_STATUS_CHECK(1, "uniq", lodash_uniq)
  DECLARE_WITH_STATUS_CHECK(1, "uniq_by", lodash_uniq_by)
  DECLARE_WITH_STATUS_CHECK(1, "uniq_with", lodash_uniq_with)
  DECLARE_WITH_STATUS_CHECK(1, "unzip", lodash_unzip)
  DECLARE_WITH_STATUS_CHECK(1, "unzip_with", lodash_unzip_with)
  DECLARE_WITH_STATUS_CHECK(1, "without", lodash_without)
  DECLARE_WITH_STATUS_CHECK(1, "xor", lodash_xor)
  DECLARE_WITH_STATUS_CHECK(1, "xor_by", lodash_xor_by)
  DECLARE_WITH_STATUS_CHECK(1, "xor_with", lodash_xor_with)
  DECLARE_WITH_STATUS_CHECK(1, "zip", lodash_zip)
  DECLARE_WITH_STATUS_CHECK(1, "zip_object", lodash_zip_object)
  DECLARE_WITH_STATUS_CHECK(1, "zip_object_deep", lodash_zip_object_deep)
  DECLARE_WITH_STATUS_CHECK(1, "zip_with", lodash_zip_with)
  DECLARE_WITH_STATUS_CHECK(1, "count_by", lodash_count_by)
  DECLARE_WITH_STATUS_CHECK(1, "every", lodash_every)
  DECLARE_WITH_STATUS_CHECK(1, "filter", lodash_filter)
  DECLARE_WITH_STATUS_CHECK(1, "find", lodash_find)
  DECLARE_WITH_STATUS_CHECK(1, "find_last", lodash_find_last)
  DECLARE_WITH_STATUS_CHECK(1, "flat_map", lodash_flat_map)
  DECLARE_WITH_STATUS_CHECK(1, "flat_map_deep", lodash_flat_map_deep)
  DECLARE_WITH_STATUS_CHECK(1, "flat_map_depth", lodash_flat_map_depth)
  DECLARE_WITH_STATUS_CHECK(1, "for_each", lodash_for_each)
  DECLARE_WITH_STATUS_CHECK(1, "for_each_right", lodash_for_each_right)
  DECLARE_WITH_STATUS_CHECK(1, "group_by", lodash_group_by)
  DECLARE_WITH_STATUS_CHECK(1, "includes", lodash_includes)
  DECLARE_WITH_STATUS_CHECK(1, "invoke_map", lodash_invoke_map)
  DECLARE_WITH_STATUS_CHECK(1, "key_by", lodash_key_by)
  DECLARE_WITH_STATUS_CHECK(1, "map", lodash_map)
  DECLARE_WITH_STATUS_CHECK(1, "order_by", lodash_order_by)
  DECLARE_WITH_STATUS_CHECK(1, "partition", lodash_partition)
  DECLARE_WITH_STATUS_CHECK(1, "reduce", lodash_reduce)
  DECLARE_WITH_STATUS_CHECK(1, "reduce_right", lodash_reduce_right)
  DECLARE_WITH_STATUS_CHECK(1, "reject", lodash_reject)
  DECLARE_WITH_STATUS_CHECK(1, "sample", lodash_sample)
  DECLARE_WITH_STATUS_CHECK(1, "sample_size", lodash_sample_size)
  DECLARE_WITH_STATUS_CHECK(1, "shuffle", lodash_shuffle)
  DECLARE_WITH_STATUS_CHECK(1, "size", lodash_size)
  DECLARE_WITH_STATUS_CHECK(1, "some", lodash_some)
  DECLARE_WITH_STATUS_CHECK(1, "sort_by", lodash_sort_by)
  DECLARE_WITH_STATUS_CHECK(1, "now", lodash_now)
  DECLARE_WITH_STATUS_CHECK(1, "after", lodash_after)
  DECLARE_WITH_STATUS_CHECK(1, "ary", lodash_ary)
  DECLARE_WITH_STATUS_CHECK(1, "before", lodash_before)
  DECLARE_WITH_STATUS_CHECK(1, "bind", lodash_bind)
  DECLARE_WITH_STATUS_CHECK(1, "bind_key", lodash_bind_key)
  DECLARE_WITH_STATUS_CHECK(1, "curry", lodash_curry)
  DECLARE_WITH_STATUS_CHECK(1, "curry_right", lodash_curry_right)
  DECLARE_WITH_STATUS_CHECK(1, "debounce", lodash_debounce)
  DECLARE_WITH_STATUS_CHECK(1, "defer", lodash_defer)
  DECLARE_WITH_STATUS_CHECK(1, "delay", lodash_delay)
  DECLARE_WITH_STATUS_CHECK(1, "flip", lodash_flip)
  DECLARE_WITH_STATUS_CHECK(1, "memoize", lodash_memoize)
  DECLARE_WITH_STATUS_CHECK(1, "negate", lodash_negate)
  DECLARE_WITH_STATUS_CHECK(1, "once", lodash_once)
  DECLARE_WITH_STATUS_CHECK(1, "over_args", lodash_over_args)
  DECLARE_WITH_STATUS_CHECK(1, "partial", lodash_partial)
  DECLARE_WITH_STATUS_CHECK(1, "partial_right", lodash_partial_right)
  DECLARE_WITH_STATUS_CHECK(1, "rearg", lodash_rearg)
  DECLARE_WITH_STATUS_CHECK(1, "rest", lodash_rest)
  DECLARE_WITH_STATUS_CHECK(1, "spread", lodash_spread)
  DECLARE_WITH_STATUS_CHECK(1, "throttle", lodash_throttle)
  DECLARE_WITH_STATUS_CHECK(1, "unary", lodash_unary)
  DECLARE_WITH_STATUS_CHECK(1, "wrap", lodash_wrap)
  DECLARE_WITH_STATUS_CHECK(1, "cast_array", lodash_cast_array)
  DECLARE_WITH_STATUS_CHECK(1, "clone", lodash_clone)
  DECLARE_WITH_STATUS_CHECK(1, "clone_deep", lodash_clone_deep)
  DECLARE_WITH_STATUS_CHECK(1, "clone_deep_with", lodash_clone_deep_with)
  DECLARE_WITH_STATUS_CHECK(1, "clone_with", lodash_clone_with)
  DECLARE_WITH_STATUS_CHECK(1, "conforms_to", lodash_conforms_to)
  DECLARE_WITH_STATUS_CHECK(1, "eq", lodash_eq)
  DECLARE_WITH_STATUS_CHECK(1, "gt", lodash_gt)
  DECLARE_WITH_STATUS_CHECK(1, "gte", lodash_gte)
  DECLARE_WITH_STATUS_CHECK(1, "is_arguments", lodash_is_arguments)
  DECLARE_WITH_STATUS_CHECK(1, "is_array", lodash_is_array)
  DECLARE_WITH_STATUS_CHECK(1, "is_array_buffer", lodash_is_array_buffer)
  DECLARE_WITH_STATUS_CHECK(1, "is_array_like", lodash_is_array_like)
  DECLARE_WITH_STATUS_CHECK(1, "is_array_like_object", lodash_is_array_like_object)
  DECLARE_WITH_STATUS_CHECK(1, "is_boolean", lodash_is_boolean)
  DECLARE_WITH_STATUS_CHECK(1, "is_buffer", lodash_is_buffer)
  DECLARE_WITH_STATUS_CHECK(1, "is_date", lodash_is_date)
  DECLARE_WITH_STATUS_CHECK(1, "is_element", lodash_is_element)
  DECLARE_WITH_STATUS_CHECK(1, "is_empty", lodash_is_empty)
  DECLARE_WITH_STATUS_CHECK(1, "is_equal", lodash_is_equal)
  DECLARE_WITH_STATUS_CHECK(1, "is_equal_with", lodash_is_equal_with)
  DECLARE_WITH_STATUS_CHECK(1, "is_error", lodash_is_error)
  DECLARE_WITH_STATUS_CHECK(1, "is_finite", lodash_is_finite)
  DECLARE_WITH_STATUS_CHECK(1, "is_function", lodash_is_function)
  DECLARE_WITH_STATUS_CHECK(1, "is_integer", lodash_is_integer)
  DECLARE_WITH_STATUS_CHECK(1, "is_length", lodash_is_length)
  DECLARE_WITH_STATUS_CHECK(1, "is_map", lodash_is_map)
  DECLARE_WITH_STATUS_CHECK(1, "is_match", lodash_is_match)
  DECLARE_WITH_STATUS_CHECK(1, "is_match_with", lodash_is_match_with)
  DECLARE_WITH_STATUS_CHECK(1, "is_na_n", lodash_is_na_n)
  DECLARE_WITH_STATUS_CHECK(1, "is_native", lodash_is_native)
  DECLARE_WITH_STATUS_CHECK(1, "is_nil", lodash_is_nil)
  DECLARE_WITH_STATUS_CHECK(1, "is_null", lodash_is_null)
  DECLARE_WITH_STATUS_CHECK(1, "is_number", lodash_is_number)
  DECLARE_WITH_STATUS_CHECK(1, "is_object", lodash_is_object)
  DECLARE_WITH_STATUS_CHECK(1, "is_object_like", lodash_is_object_like)
  DECLARE_WITH_STATUS_CHECK(1, "is_plain_object", lodash_is_plain_object)
  DECLARE_WITH_STATUS_CHECK(1, "is_reg_exp", lodash_is_reg_exp)
  DECLARE_WITH_STATUS_CHECK(1, "is_safe_integer", lodash_is_safe_integer)
  DECLARE_WITH_STATUS_CHECK(1, "is_set", lodash_is_set)
  DECLARE_WITH_STATUS_CHECK(1, "is_string", lodash_is_string)
  DECLARE_WITH_STATUS_CHECK(1, "is_symbol", lodash_is_symbol)
  DECLARE_WITH_STATUS_CHECK(1, "is_typed_array", lodash_is_typed_array)
  DECLARE_WITH_STATUS_CHECK(1, "is_undefined", lodash_is_undefined)
  DECLARE_WITH_STATUS_CHECK(1, "is_weak_map", lodash_is_weak_map)
  DECLARE_WITH_STATUS_CHECK(1, "is_weak_set", lodash_is_weak_set)
  DECLARE_WITH_STATUS_CHECK(1, "lt", lodash_lt)
  DECLARE_WITH_STATUS_CHECK(1, "lte", lodash_lte)
  DECLARE_WITH_STATUS_CHECK(1, "to_array", lodash_to_array)
  DECLARE_WITH_STATUS_CHECK(1, "to_finite", lodash_to_finite)
  DECLARE_WITH_STATUS_CHECK(1, "to_integer", lodash_to_integer)
  DECLARE_WITH_STATUS_CHECK(1, "to_length", lodash_to_length)
  DECLARE_WITH_STATUS_CHECK(1, "to_number", lodash_to_number)
  DECLARE_WITH_STATUS_CHECK(1, "to_plain_object", lodash_to_plain_object)
  DECLARE_WITH_STATUS_CHECK(1, "to_safe_integer", lodash_to_safe_integer)
  DECLARE_WITH_STATUS_CHECK(1, "to_string", lodash_to_string)
  DECLARE_WITH_STATUS_CHECK(1, "add", lodash_add)
  DECLARE_WITH_STATUS_CHECK(1, "ceil", lodash_ceil)
  DECLARE_WITH_STATUS_CHECK(1, "divide", lodash_divide)
  DECLARE_WITH_STATUS_CHECK(1, "floor", lodash_floor)
  DECLARE_WITH_STATUS_CHECK(1, "max", lodash_max)
  DECLARE_WITH_STATUS_CHECK(1, "max_by", lodash_max_by)
  DECLARE_WITH_STATUS_CHECK(1, "mean", lodash_mean)
  DECLARE_WITH_STATUS_CHECK(1, "mean_by", lodash_mean_by)
  DECLARE_WITH_STATUS_CHECK(1, "min", lodash_min)
  DECLARE_WITH_STATUS_CHECK(1, "min_by", lodash_min_by)
  DECLARE_WITH_STATUS_CHECK(1, "multiply", lodash_multiply)
  DECLARE_WITH_STATUS_CHECK(1, "round", lodash_round)
  DECLARE_WITH_STATUS_CHECK(1, "subtract", lodash_subtract)
  DECLARE_WITH_STATUS_CHECK(1, "sum", lodash_sum)
  DECLARE_WITH_STATUS_CHECK(1, "sum_by", lodash_sum_by)
  DECLARE_WITH_STATUS_CHECK(1, "clamp", lodash_clamp)
  DECLARE_WITH_STATUS_CHECK(1, "in_range", lodash_in_range)
  DECLARE_WITH_STATUS_CHECK(1, "random", lodash_random)
  DECLARE_WITH_STATUS_CHECK(1, "assign", lodash_assign)
  DECLARE_WITH_STATUS_CHECK(1, "assign_in", lodash_assign_in)
  DECLARE_WITH_STATUS_CHECK(1, "assign_in_with", lodash_assign_in_with)
  DECLARE_WITH_STATUS_CHECK(1, "assign_with", lodash_assign_with)
  DECLARE_WITH_STATUS_CHECK(1, "at", lodash_at)
  DECLARE_WITH_STATUS_CHECK(1, "create", lodash_create)
  DECLARE_WITH_STATUS_CHECK(1, "defaults", lodash_defaults)
  DECLARE_WITH_STATUS_CHECK(1, "defaults_deep", lodash_defaults_deep)
  DECLARE_WITH_STATUS_CHECK(1, "find_key", lodash_find_key)
  DECLARE_WITH_STATUS_CHECK(1, "find_last_key", lodash_find_last_key)
  DECLARE_WITH_STATUS_CHECK(1, "for_in", lodash_for_in)
  DECLARE_WITH_STATUS_CHECK(1, "for_in_right", lodash_for_in_right)
  DECLARE_WITH_STATUS_CHECK(1, "for_own", lodash_for_own)
  DECLARE_WITH_STATUS_CHECK(1, "for_own_right", lodash_for_own_right)
  DECLARE_WITH_STATUS_CHECK(1, "functions", lodash_functions)
  DECLARE_WITH_STATUS_CHECK(1, "functions_in", lodash_functions_in)
  DECLARE_WITH_STATUS_CHECK(1, "get", lodash_get)
  DECLARE_WITH_STATUS_CHECK(1, "has", lodash_has)
  DECLARE_WITH_STATUS_CHECK(1, "has_in", lodash_has_in)
  DECLARE_WITH_STATUS_CHECK(1, "invert", lodash_invert)
  DECLARE_WITH_STATUS_CHECK(1, "invert_by", lodash_invert_by)
  DECLARE_WITH_STATUS_CHECK(1, "invoke", lodash_invoke)
  DECLARE_WITH_STATUS_CHECK(1, "keys", lodash_keys)
  DECLARE_WITH_STATUS_CHECK(1, "keys_in", lodash_keys_in)
  DECLARE_WITH_STATUS_CHECK(1, "map_keys", lodash_map_keys)
  DECLARE_WITH_STATUS_CHECK(1, "map_values", lodash_map_values)
  DECLARE_WITH_STATUS_CHECK(1, "merge", lodash_merge)
  DECLARE_WITH_STATUS_CHECK(1, "merge_with", lodash_merge_with)
  DECLARE_WITH_STATUS_CHECK(1, "omit", lodash_omit)
  DECLARE_WITH_STATUS_CHECK(1, "omit_by", lodash_omit_by)
  DECLARE_WITH_STATUS_CHECK(1, "pick", lodash_pick)
  DECLARE_WITH_STATUS_CHECK(1, "pick_by", lodash_pick_by)
  DECLARE_WITH_STATUS_CHECK(1, "result", lodash_result)
  DECLARE_WITH_STATUS_CHECK(1, "set", lodash_set)
  DECLARE_WITH_STATUS_CHECK(1, "set_with", lodash_set_with)
  DECLARE_WITH_STATUS_CHECK(1, "to_pairs", lodash_to_pairs)
  DECLARE_WITH_STATUS_CHECK(1, "to_pairs_in", lodash_to_pairs_in)
  DECLARE_WITH_STATUS_CHECK(1, "transform", lodash_transform)
  DECLARE_WITH_STATUS_CHECK(1, "unset", lodash_unset)
  DECLARE_WITH_STATUS_CHECK(1, "update", lodash_update)
  DECLARE_WITH_STATUS_CHECK(1, "update_with", lodash_update_with)
  DECLARE_WITH_STATUS_CHECK(1, "values", lodash_values)
  DECLARE_WITH_STATUS_CHECK(1, "values_in", lodash_values_in)
  DECLARE_WITH_STATUS_CHECK(1, "camel_case", lodash_camel_case)
  DECLARE_WITH_STATUS_CHECK(1, "capitalize", lodash_capitalize)
  DECLARE_WITH_STATUS_CHECK(1, "deburr", lodash_deburr)
  DECLARE_WITH_STATUS_CHECK(1, "ends_with", lodash_ends_with)
  DECLARE_WITH_STATUS_CHECK(1, "escape", lodash_escape)
  DECLARE_WITH_STATUS_CHECK(1, "escape_reg_exp", lodash_escape_reg_exp)
  DECLARE_WITH_STATUS_CHECK(1, "kebab_case", lodash_kebab_case)
  DECLARE_WITH_STATUS_CHECK(1, "lower_case", lodash_lower_case)
  DECLARE_WITH_STATUS_CHECK(1, "lower_first", lodash_lower_first)
  DECLARE_WITH_STATUS_CHECK(1, "pad", lodash_pad)
  DECLARE_WITH_STATUS_CHECK(1, "pad_end", lodash_pad_end)
  DECLARE_WITH_STATUS_CHECK(1, "pad_start", lodash_pad_start)
  DECLARE_WITH_STATUS_CHECK(1, "parse_int", lodash_parse_int)
  DECLARE_WITH_STATUS_CHECK(1, "repeat", lodash_repeat)
  DECLARE_WITH_STATUS_CHECK(1, "replace", lodash_replace)
  DECLARE_WITH_STATUS_CHECK(1, "snake_case", lodash_snake_case)
  DECLARE_WITH_STATUS_CHECK(1, "split", lodash_split)
  DECLARE_WITH_STATUS_CHECK(1, "start_case", lodash_start_case)
  DECLARE_WITH_STATUS_CHECK(1, "starts_with", lodash_starts_with)
  DECLARE_WITH_STATUS_CHECK(1, "template", lodash_template)
  DECLARE_WITH_STATUS_CHECK(1, "to_lower", lodash_to_lower)
  DECLARE_WITH_STATUS_CHECK(1, "to_upper", lodash_to_upper)
  DECLARE_WITH_STATUS_CHECK(1, "trim", lodash_trim)
  DECLARE_WITH_STATUS_CHECK(1, "trim_end", lodash_trim_end)
  DECLARE_WITH_STATUS_CHECK(1, "trim_start", lodash_trim_start)
  DECLARE_WITH_STATUS_CHECK(1, "truncate", lodash_truncate)
  DECLARE_WITH_STATUS_CHECK(1, "unescape", lodash_unescape)
  DECLARE_WITH_STATUS_CHECK(1, "upper_case", lodash_upper_case)
  DECLARE_WITH_STATUS_CHECK(1, "upper_first", lodash_upper_first)
  DECLARE_WITH_STATUS_CHECK(1, "words", lodash_words)
  DECLARE_WITH_STATUS_CHECK(1, "attempt", lodash_attempt)
  DECLARE_WITH_STATUS_CHECK(1, "bind_all", lodash_bind_all)
  DECLARE_WITH_STATUS_CHECK(1, "cond", lodash_cond)
  DECLARE_WITH_STATUS_CHECK(1, "conforms", lodash_conforms)
  DECLARE_WITH_STATUS_CHECK(1, "constant", lodash_constant)
  DECLARE_WITH_STATUS_CHECK(1, "default_to", lodash_default_to)
  DECLARE_WITH_STATUS_CHECK(1, "flow", lodash_flow)
  DECLARE_WITH_STATUS_CHECK(1, "flow_right", lodash_flow_right)
  DECLARE_WITH_STATUS_CHECK(1, "identity", lodash_identity)
  DECLARE_WITH_STATUS_CHECK(1, "iteratee", lodash_iteratee)
  DECLARE_WITH_STATUS_CHECK(1, "matches", lodash_matches)
  DECLARE_WITH_STATUS_CHECK(1, "matches_property", lodash_matches_property)
  DECLARE_WITH_STATUS_CHECK(1, "method", lodash_method)
  DECLARE_WITH_STATUS_CHECK(1, "method_of", lodash_method_of)
  DECLARE_WITH_STATUS_CHECK(1, "mixin", lodash_mixin)
  DECLARE_WITH_STATUS_CHECK(1, "no_conflict", lodash_no_conflict)
  DECLARE_WITH_STATUS_CHECK(1, "noop", lodash_noop)
  DECLARE_WITH_STATUS_CHECK(1, "nth_arg", lodash_nth_arg)
  DECLARE_WITH_STATUS_CHECK(1, "over", lodash_over)
  DECLARE_WITH_STATUS_CHECK(1, "over_every", lodash_over_every)
  DECLARE_WITH_STATUS_CHECK(1, "over_some", lodash_over_some)
  DECLARE_WITH_STATUS_CHECK(1, "property", lodash_property)
  DECLARE_WITH_STATUS_CHECK(1, "property_of", lodash_property_of)
  DECLARE_WITH_STATUS_CHECK(1, "range", lodash_range)
  DECLARE_WITH_STATUS_CHECK(1, "range_right", lodash_range_right)
  DECLARE_WITH_STATUS_CHECK(1, "run_in_context", lodash_run_in_context)
  DECLARE_WITH_STATUS_CHECK(1, "stub_array", lodash_stub_array)
  DECLARE_WITH_STATUS_CHECK(1, "stub_false", lodash_stub_false)
  DECLARE_WITH_STATUS_CHECK(1, "stub_object", lodash_stub_object)
  DECLARE_WITH_STATUS_CHECK(1, "stub_string", lodash_stub_string)
  DECLARE_WITH_STATUS_CHECK(1, "stub_true", lodash_stub_true)
  DECLARE_WITH_STATUS_CHECK(1, "times", lodash_times)
  DECLARE_WITH_STATUS_CHECK(1, "to_path", lodash_to_path)
  DECLARE_WITH_STATUS_CHECK(1, "unique_id", lodash_unique_id)

  return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)
