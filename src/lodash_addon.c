#include <assert.h>
#include <node_api.h>

#include "../lib/lodash.h"

#define DECLARE_NAPI_METHOD(name, func) \
  { name, 0, func, 0, 0, 0, napi_default, 0 }

#define DECLARE_WITH_STATUS_CHECK(index, name, func)                      \
  napi_property_descriptor func##_desc = DECLARE_NAPI_METHOD(name, func); \
  status = napi_define_properties(env, exports, index, &func##_desc);     \
  assert(status == napi_ok);

static napi_value Init(napi_env env, napi_value exports) {
  napi_status status;

  
            napi_property_descriptor chunk_desc =
            DECLARE_NAPI_METHOD("chunk", lodash_chunk);
            status = napi_define_properties(env, exports, 1, &chunk_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor compact_desc =
            DECLARE_NAPI_METHOD("compact", lodash_compact);
            status = napi_define_properties(env, exports, 1, &compact_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor concat_desc =
            DECLARE_NAPI_METHOD("concat", lodash_concat);
            status = napi_define_properties(env, exports, 1, &concat_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor difference_desc =
            DECLARE_NAPI_METHOD("difference", lodash_difference);
            status = napi_define_properties(env, exports, 1, &difference_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor difference_by_desc =
            DECLARE_NAPI_METHOD("difference_by", lodash_difference_by);
            status = napi_define_properties(env, exports, 1, &difference_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor difference_with_desc =
            DECLARE_NAPI_METHOD("difference_with", lodash_difference_with);
            status = napi_define_properties(env, exports, 1, &difference_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor drop_desc =
            DECLARE_NAPI_METHOD("drop", lodash_drop);
            status = napi_define_properties(env, exports, 1, &drop_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor drop_right_desc =
            DECLARE_NAPI_METHOD("drop_right", lodash_drop_right);
            status = napi_define_properties(env, exports, 1, &drop_right_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor drop_right_while_desc =
            DECLARE_NAPI_METHOD("drop_right_while", lodash_drop_right_while);
            status = napi_define_properties(env, exports, 1, &drop_right_while_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor drop_while_desc =
            DECLARE_NAPI_METHOD("drop_while", lodash_drop_while);
            status = napi_define_properties(env, exports, 1, &drop_while_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor fill_desc =
            DECLARE_NAPI_METHOD("fill", lodash_fill);
            status = napi_define_properties(env, exports, 1, &fill_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor find_index_desc =
            DECLARE_NAPI_METHOD("find_index", lodash_find_index);
            status = napi_define_properties(env, exports, 1, &find_index_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor find_last_index_desc =
            DECLARE_NAPI_METHOD("find_last_index", lodash_find_last_index);
            status = napi_define_properties(env, exports, 1, &find_last_index_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor flatten_desc =
            DECLARE_NAPI_METHOD("flatten", lodash_flatten);
            status = napi_define_properties(env, exports, 1, &flatten_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor flatten_deep_desc =
            DECLARE_NAPI_METHOD("flatten_deep", lodash_flatten_deep);
            status = napi_define_properties(env, exports, 1, &flatten_deep_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor flatten_depth_desc =
            DECLARE_NAPI_METHOD("flatten_depth", lodash_flatten_depth);
            status = napi_define_properties(env, exports, 1, &flatten_depth_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor from_pairs_desc =
            DECLARE_NAPI_METHOD("from_pairs", lodash_from_pairs);
            status = napi_define_properties(env, exports, 1, &from_pairs_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor head_desc =
            DECLARE_NAPI_METHOD("head", lodash_head);
            status = napi_define_properties(env, exports, 1, &head_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor index_of_desc =
            DECLARE_NAPI_METHOD("index_of", lodash_index_of);
            status = napi_define_properties(env, exports, 1, &index_of_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor initial_desc =
            DECLARE_NAPI_METHOD("initial", lodash_initial);
            status = napi_define_properties(env, exports, 1, &initial_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor intersection_desc =
            DECLARE_NAPI_METHOD("intersection", lodash_intersection);
            status = napi_define_properties(env, exports, 1, &intersection_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor intersection_by_desc =
            DECLARE_NAPI_METHOD("intersection_by", lodash_intersection_by);
            status = napi_define_properties(env, exports, 1, &intersection_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor intersection_with_desc =
            DECLARE_NAPI_METHOD("intersection_with", lodash_intersection_with);
            status = napi_define_properties(env, exports, 1, &intersection_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor join_desc =
            DECLARE_NAPI_METHOD("join", lodash_join);
            status = napi_define_properties(env, exports, 1, &join_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor last_desc =
            DECLARE_NAPI_METHOD("last", lodash_last);
            status = napi_define_properties(env, exports, 1, &last_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor last_index_of_desc =
            DECLARE_NAPI_METHOD("last_index_of", lodash_last_index_of);
            status = napi_define_properties(env, exports, 1, &last_index_of_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor nth_desc =
            DECLARE_NAPI_METHOD("nth", lodash_nth);
            status = napi_define_properties(env, exports, 1, &nth_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor pull_desc =
            DECLARE_NAPI_METHOD("pull", lodash_pull);
            status = napi_define_properties(env, exports, 1, &pull_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor pull_all_desc =
            DECLARE_NAPI_METHOD("pull_all", lodash_pull_all);
            status = napi_define_properties(env, exports, 1, &pull_all_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor pull_all_by_desc =
            DECLARE_NAPI_METHOD("pull_all_by", lodash_pull_all_by);
            status = napi_define_properties(env, exports, 1, &pull_all_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor pull_all_with_desc =
            DECLARE_NAPI_METHOD("pull_all_with", lodash_pull_all_with);
            status = napi_define_properties(env, exports, 1, &pull_all_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor pull_at_desc =
            DECLARE_NAPI_METHOD("pull_at", lodash_pull_at);
            status = napi_define_properties(env, exports, 1, &pull_at_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor remove_desc =
            DECLARE_NAPI_METHOD("remove", lodash_remove);
            status = napi_define_properties(env, exports, 1, &remove_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor reverse_desc =
            DECLARE_NAPI_METHOD("reverse", lodash_reverse);
            status = napi_define_properties(env, exports, 1, &reverse_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor slice_desc =
            DECLARE_NAPI_METHOD("slice", lodash_slice);
            status = napi_define_properties(env, exports, 1, &slice_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sorted_index_desc =
            DECLARE_NAPI_METHOD("sorted_index", lodash_sorted_index);
            status = napi_define_properties(env, exports, 1, &sorted_index_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sorted_index_by_desc =
            DECLARE_NAPI_METHOD("sorted_index_by", lodash_sorted_index_by);
            status = napi_define_properties(env, exports, 1, &sorted_index_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sorted_index_of_desc =
            DECLARE_NAPI_METHOD("sorted_index_of", lodash_sorted_index_of);
            status = napi_define_properties(env, exports, 1, &sorted_index_of_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sorted_last_index_desc =
            DECLARE_NAPI_METHOD("sorted_last_index", lodash_sorted_last_index);
            status = napi_define_properties(env, exports, 1, &sorted_last_index_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sorted_last_index_by_desc =
            DECLARE_NAPI_METHOD("sorted_last_index_by", lodash_sorted_last_index_by);
            status = napi_define_properties(env, exports, 1, &sorted_last_index_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sorted_last_index_of_desc =
            DECLARE_NAPI_METHOD("sorted_last_index_of", lodash_sorted_last_index_of);
            status = napi_define_properties(env, exports, 1, &sorted_last_index_of_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sorted_uniq_desc =
            DECLARE_NAPI_METHOD("sorted_uniq", lodash_sorted_uniq);
            status = napi_define_properties(env, exports, 1, &sorted_uniq_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sorted_uniq_by_desc =
            DECLARE_NAPI_METHOD("sorted_uniq_by", lodash_sorted_uniq_by);
            status = napi_define_properties(env, exports, 1, &sorted_uniq_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor tail_desc =
            DECLARE_NAPI_METHOD("tail", lodash_tail);
            status = napi_define_properties(env, exports, 1, &tail_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor take_desc =
            DECLARE_NAPI_METHOD("take", lodash_take);
            status = napi_define_properties(env, exports, 1, &take_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor take_right_desc =
            DECLARE_NAPI_METHOD("take_right", lodash_take_right);
            status = napi_define_properties(env, exports, 1, &take_right_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor take_right_while_desc =
            DECLARE_NAPI_METHOD("take_right_while", lodash_take_right_while);
            status = napi_define_properties(env, exports, 1, &take_right_while_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor take_while_desc =
            DECLARE_NAPI_METHOD("take_while", lodash_take_while);
            status = napi_define_properties(env, exports, 1, &take_while_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor union_desc =
            DECLARE_NAPI_METHOD("union", lodash_union);
            status = napi_define_properties(env, exports, 1, &union_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor union_by_desc =
            DECLARE_NAPI_METHOD("union_by", lodash_union_by);
            status = napi_define_properties(env, exports, 1, &union_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor union_with_desc =
            DECLARE_NAPI_METHOD("union_with", lodash_union_with);
            status = napi_define_properties(env, exports, 1, &union_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor uniq_desc =
            DECLARE_NAPI_METHOD("uniq", lodash_uniq);
            status = napi_define_properties(env, exports, 1, &uniq_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor uniq_by_desc =
            DECLARE_NAPI_METHOD("uniq_by", lodash_uniq_by);
            status = napi_define_properties(env, exports, 1, &uniq_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor uniq_with_desc =
            DECLARE_NAPI_METHOD("uniq_with", lodash_uniq_with);
            status = napi_define_properties(env, exports, 1, &uniq_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor unzip_desc =
            DECLARE_NAPI_METHOD("unzip", lodash_unzip);
            status = napi_define_properties(env, exports, 1, &unzip_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor unzip_with_desc =
            DECLARE_NAPI_METHOD("unzip_with", lodash_unzip_with);
            status = napi_define_properties(env, exports, 1, &unzip_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor without_desc =
            DECLARE_NAPI_METHOD("without", lodash_without);
            status = napi_define_properties(env, exports, 1, &without_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor xor_desc =
            DECLARE_NAPI_METHOD("xor", lodash_xor);
            status = napi_define_properties(env, exports, 1, &xor_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor xor_by_desc =
            DECLARE_NAPI_METHOD("xor_by", lodash_xor_by);
            status = napi_define_properties(env, exports, 1, &xor_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor xor_with_desc =
            DECLARE_NAPI_METHOD("xor_with", lodash_xor_with);
            status = napi_define_properties(env, exports, 1, &xor_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor zip_desc =
            DECLARE_NAPI_METHOD("zip", lodash_zip);
            status = napi_define_properties(env, exports, 1, &zip_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor zip_object_desc =
            DECLARE_NAPI_METHOD("zip_object", lodash_zip_object);
            status = napi_define_properties(env, exports, 1, &zip_object_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor zip_object_deep_desc =
            DECLARE_NAPI_METHOD("zip_object_deep", lodash_zip_object_deep);
            status = napi_define_properties(env, exports, 1, &zip_object_deep_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor zip_with_desc =
            DECLARE_NAPI_METHOD("zip_with", lodash_zip_with);
            status = napi_define_properties(env, exports, 1, &zip_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor count_by_desc =
            DECLARE_NAPI_METHOD("count_by", lodash_count_by);
            status = napi_define_properties(env, exports, 1, &count_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor every_desc =
            DECLARE_NAPI_METHOD("every", lodash_every);
            status = napi_define_properties(env, exports, 1, &every_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor filter_desc =
            DECLARE_NAPI_METHOD("filter", lodash_filter);
            status = napi_define_properties(env, exports, 1, &filter_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor find_desc =
            DECLARE_NAPI_METHOD("find", lodash_find);
            status = napi_define_properties(env, exports, 1, &find_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor find_last_desc =
            DECLARE_NAPI_METHOD("find_last", lodash_find_last);
            status = napi_define_properties(env, exports, 1, &find_last_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor flat_map_desc =
            DECLARE_NAPI_METHOD("flat_map", lodash_flat_map);
            status = napi_define_properties(env, exports, 1, &flat_map_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor flat_map_deep_desc =
            DECLARE_NAPI_METHOD("flat_map_deep", lodash_flat_map_deep);
            status = napi_define_properties(env, exports, 1, &flat_map_deep_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor flat_map_depth_desc =
            DECLARE_NAPI_METHOD("flat_map_depth", lodash_flat_map_depth);
            status = napi_define_properties(env, exports, 1, &flat_map_depth_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor for_each_desc =
            DECLARE_NAPI_METHOD("for_each", lodash_for_each);
            status = napi_define_properties(env, exports, 1, &for_each_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor for_each_right_desc =
            DECLARE_NAPI_METHOD("for_each_right", lodash_for_each_right);
            status = napi_define_properties(env, exports, 1, &for_each_right_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor group_by_desc =
            DECLARE_NAPI_METHOD("group_by", lodash_group_by);
            status = napi_define_properties(env, exports, 1, &group_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor includes_desc =
            DECLARE_NAPI_METHOD("includes", lodash_includes);
            status = napi_define_properties(env, exports, 1, &includes_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor invoke_map_desc =
            DECLARE_NAPI_METHOD("invoke_map", lodash_invoke_map);
            status = napi_define_properties(env, exports, 1, &invoke_map_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor key_by_desc =
            DECLARE_NAPI_METHOD("key_by", lodash_key_by);
            status = napi_define_properties(env, exports, 1, &key_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor map_desc =
            DECLARE_NAPI_METHOD("map", lodash_map);
            status = napi_define_properties(env, exports, 1, &map_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor order_by_desc =
            DECLARE_NAPI_METHOD("order_by", lodash_order_by);
            status = napi_define_properties(env, exports, 1, &order_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor partition_desc =
            DECLARE_NAPI_METHOD("partition", lodash_partition);
            status = napi_define_properties(env, exports, 1, &partition_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor reduce_desc =
            DECLARE_NAPI_METHOD("reduce", lodash_reduce);
            status = napi_define_properties(env, exports, 1, &reduce_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor reduce_right_desc =
            DECLARE_NAPI_METHOD("reduce_right", lodash_reduce_right);
            status = napi_define_properties(env, exports, 1, &reduce_right_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor reject_desc =
            DECLARE_NAPI_METHOD("reject", lodash_reject);
            status = napi_define_properties(env, exports, 1, &reject_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sample_desc =
            DECLARE_NAPI_METHOD("sample", lodash_sample);
            status = napi_define_properties(env, exports, 1, &sample_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sample_size_desc =
            DECLARE_NAPI_METHOD("sample_size", lodash_sample_size);
            status = napi_define_properties(env, exports, 1, &sample_size_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor shuffle_desc =
            DECLARE_NAPI_METHOD("shuffle", lodash_shuffle);
            status = napi_define_properties(env, exports, 1, &shuffle_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor size_desc =
            DECLARE_NAPI_METHOD("size", lodash_size);
            status = napi_define_properties(env, exports, 1, &size_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor some_desc =
            DECLARE_NAPI_METHOD("some", lodash_some);
            status = napi_define_properties(env, exports, 1, &some_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sort_by_desc =
            DECLARE_NAPI_METHOD("sort_by", lodash_sort_by);
            status = napi_define_properties(env, exports, 1, &sort_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor now_desc =
            DECLARE_NAPI_METHOD("now", lodash_now);
            status = napi_define_properties(env, exports, 1, &now_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor after_desc =
            DECLARE_NAPI_METHOD("after", lodash_after);
            status = napi_define_properties(env, exports, 1, &after_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor ary_desc =
            DECLARE_NAPI_METHOD("ary", lodash_ary);
            status = napi_define_properties(env, exports, 1, &ary_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor before_desc =
            DECLARE_NAPI_METHOD("before", lodash_before);
            status = napi_define_properties(env, exports, 1, &before_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor bind_desc =
            DECLARE_NAPI_METHOD("bind", lodash_bind);
            status = napi_define_properties(env, exports, 1, &bind_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor bind_key_desc =
            DECLARE_NAPI_METHOD("bind_key", lodash_bind_key);
            status = napi_define_properties(env, exports, 1, &bind_key_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor curry_desc =
            DECLARE_NAPI_METHOD("curry", lodash_curry);
            status = napi_define_properties(env, exports, 1, &curry_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor curry_right_desc =
            DECLARE_NAPI_METHOD("curry_right", lodash_curry_right);
            status = napi_define_properties(env, exports, 1, &curry_right_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor debounce_desc =
            DECLARE_NAPI_METHOD("debounce", lodash_debounce);
            status = napi_define_properties(env, exports, 1, &debounce_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor defer_desc =
            DECLARE_NAPI_METHOD("defer", lodash_defer);
            status = napi_define_properties(env, exports, 1, &defer_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor delay_desc =
            DECLARE_NAPI_METHOD("delay", lodash_delay);
            status = napi_define_properties(env, exports, 1, &delay_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor flip_desc =
            DECLARE_NAPI_METHOD("flip", lodash_flip);
            status = napi_define_properties(env, exports, 1, &flip_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor memoize_desc =
            DECLARE_NAPI_METHOD("memoize", lodash_memoize);
            status = napi_define_properties(env, exports, 1, &memoize_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor negate_desc =
            DECLARE_NAPI_METHOD("negate", lodash_negate);
            status = napi_define_properties(env, exports, 1, &negate_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor once_desc =
            DECLARE_NAPI_METHOD("once", lodash_once);
            status = napi_define_properties(env, exports, 1, &once_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor over_args_desc =
            DECLARE_NAPI_METHOD("over_args", lodash_over_args);
            status = napi_define_properties(env, exports, 1, &over_args_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor partial_desc =
            DECLARE_NAPI_METHOD("partial", lodash_partial);
            status = napi_define_properties(env, exports, 1, &partial_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor partial_right_desc =
            DECLARE_NAPI_METHOD("partial_right", lodash_partial_right);
            status = napi_define_properties(env, exports, 1, &partial_right_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor rearg_desc =
            DECLARE_NAPI_METHOD("rearg", lodash_rearg);
            status = napi_define_properties(env, exports, 1, &rearg_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor rest_desc =
            DECLARE_NAPI_METHOD("rest", lodash_rest);
            status = napi_define_properties(env, exports, 1, &rest_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor spread_desc =
            DECLARE_NAPI_METHOD("spread", lodash_spread);
            status = napi_define_properties(env, exports, 1, &spread_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor throttle_desc =
            DECLARE_NAPI_METHOD("throttle", lodash_throttle);
            status = napi_define_properties(env, exports, 1, &throttle_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor unary_desc =
            DECLARE_NAPI_METHOD("unary", lodash_unary);
            status = napi_define_properties(env, exports, 1, &unary_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor wrap_desc =
            DECLARE_NAPI_METHOD("wrap", lodash_wrap);
            status = napi_define_properties(env, exports, 1, &wrap_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor cast_array_desc =
            DECLARE_NAPI_METHOD("cast_array", lodash_cast_array);
            status = napi_define_properties(env, exports, 1, &cast_array_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor clone_desc =
            DECLARE_NAPI_METHOD("clone", lodash_clone);
            status = napi_define_properties(env, exports, 1, &clone_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor clone_deep_desc =
            DECLARE_NAPI_METHOD("clone_deep", lodash_clone_deep);
            status = napi_define_properties(env, exports, 1, &clone_deep_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor clone_deep_with_desc =
            DECLARE_NAPI_METHOD("clone_deep_with", lodash_clone_deep_with);
            status = napi_define_properties(env, exports, 1, &clone_deep_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor clone_with_desc =
            DECLARE_NAPI_METHOD("clone_with", lodash_clone_with);
            status = napi_define_properties(env, exports, 1, &clone_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor conforms_to_desc =
            DECLARE_NAPI_METHOD("conforms_to", lodash_conforms_to);
            status = napi_define_properties(env, exports, 1, &conforms_to_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor eq_desc =
            DECLARE_NAPI_METHOD("eq", lodash_eq);
            status = napi_define_properties(env, exports, 1, &eq_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor gt_desc =
            DECLARE_NAPI_METHOD("gt", lodash_gt);
            status = napi_define_properties(env, exports, 1, &gt_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor gte_desc =
            DECLARE_NAPI_METHOD("gte", lodash_gte);
            status = napi_define_properties(env, exports, 1, &gte_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_arguments_desc =
            DECLARE_NAPI_METHOD("is_arguments", lodash_is_arguments);
            status = napi_define_properties(env, exports, 1, &is_arguments_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_array_desc =
            DECLARE_NAPI_METHOD("is_array", lodash_is_array);
            status = napi_define_properties(env, exports, 1, &is_array_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_array_buffer_desc =
            DECLARE_NAPI_METHOD("is_array_buffer", lodash_is_array_buffer);
            status = napi_define_properties(env, exports, 1, &is_array_buffer_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_array_like_desc =
            DECLARE_NAPI_METHOD("is_array_like", lodash_is_array_like);
            status = napi_define_properties(env, exports, 1, &is_array_like_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_array_like_object_desc =
            DECLARE_NAPI_METHOD("is_array_like_object", lodash_is_array_like_object);
            status = napi_define_properties(env, exports, 1, &is_array_like_object_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_boolean_desc =
            DECLARE_NAPI_METHOD("is_boolean", lodash_is_boolean);
            status = napi_define_properties(env, exports, 1, &is_boolean_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_buffer_desc =
            DECLARE_NAPI_METHOD("is_buffer", lodash_is_buffer);
            status = napi_define_properties(env, exports, 1, &is_buffer_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_date_desc =
            DECLARE_NAPI_METHOD("is_date", lodash_is_date);
            status = napi_define_properties(env, exports, 1, &is_date_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_element_desc =
            DECLARE_NAPI_METHOD("is_element", lodash_is_element);
            status = napi_define_properties(env, exports, 1, &is_element_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_empty_desc =
            DECLARE_NAPI_METHOD("is_empty", lodash_is_empty);
            status = napi_define_properties(env, exports, 1, &is_empty_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_equal_desc =
            DECLARE_NAPI_METHOD("is_equal", lodash_is_equal);
            status = napi_define_properties(env, exports, 1, &is_equal_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_equal_with_desc =
            DECLARE_NAPI_METHOD("is_equal_with", lodash_is_equal_with);
            status = napi_define_properties(env, exports, 1, &is_equal_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_error_desc =
            DECLARE_NAPI_METHOD("is_error", lodash_is_error);
            status = napi_define_properties(env, exports, 1, &is_error_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_finite_desc =
            DECLARE_NAPI_METHOD("is_finite", lodash_is_finite);
            status = napi_define_properties(env, exports, 1, &is_finite_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_function_desc =
            DECLARE_NAPI_METHOD("is_function", lodash_is_function);
            status = napi_define_properties(env, exports, 1, &is_function_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_integer_desc =
            DECLARE_NAPI_METHOD("is_integer", lodash_is_integer);
            status = napi_define_properties(env, exports, 1, &is_integer_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_length_desc =
            DECLARE_NAPI_METHOD("is_length", lodash_is_length);
            status = napi_define_properties(env, exports, 1, &is_length_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_map_desc =
            DECLARE_NAPI_METHOD("is_map", lodash_is_map);
            status = napi_define_properties(env, exports, 1, &is_map_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_match_desc =
            DECLARE_NAPI_METHOD("is_match", lodash_is_match);
            status = napi_define_properties(env, exports, 1, &is_match_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_match_with_desc =
            DECLARE_NAPI_METHOD("is_match_with", lodash_is_match_with);
            status = napi_define_properties(env, exports, 1, &is_match_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_na_n_desc =
            DECLARE_NAPI_METHOD("is_na_n", lodash_is_na_n);
            status = napi_define_properties(env, exports, 1, &is_na_n_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_native_desc =
            DECLARE_NAPI_METHOD("is_native", lodash_is_native);
            status = napi_define_properties(env, exports, 1, &is_native_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_nil_desc =
            DECLARE_NAPI_METHOD("is_nil", lodash_is_nil);
            status = napi_define_properties(env, exports, 1, &is_nil_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_null_desc =
            DECLARE_NAPI_METHOD("is_null", lodash_is_null);
            status = napi_define_properties(env, exports, 1, &is_null_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_number_desc =
            DECLARE_NAPI_METHOD("is_number", lodash_is_number);
            status = napi_define_properties(env, exports, 1, &is_number_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_object_desc =
            DECLARE_NAPI_METHOD("is_object", lodash_is_object);
            status = napi_define_properties(env, exports, 1, &is_object_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_object_like_desc =
            DECLARE_NAPI_METHOD("is_object_like", lodash_is_object_like);
            status = napi_define_properties(env, exports, 1, &is_object_like_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_plain_object_desc =
            DECLARE_NAPI_METHOD("is_plain_object", lodash_is_plain_object);
            status = napi_define_properties(env, exports, 1, &is_plain_object_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_reg_exp_desc =
            DECLARE_NAPI_METHOD("is_reg_exp", lodash_is_reg_exp);
            status = napi_define_properties(env, exports, 1, &is_reg_exp_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_safe_integer_desc =
            DECLARE_NAPI_METHOD("is_safe_integer", lodash_is_safe_integer);
            status = napi_define_properties(env, exports, 1, &is_safe_integer_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_set_desc =
            DECLARE_NAPI_METHOD("is_set", lodash_is_set);
            status = napi_define_properties(env, exports, 1, &is_set_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_string_desc =
            DECLARE_NAPI_METHOD("is_string", lodash_is_string);
            status = napi_define_properties(env, exports, 1, &is_string_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_symbol_desc =
            DECLARE_NAPI_METHOD("is_symbol", lodash_is_symbol);
            status = napi_define_properties(env, exports, 1, &is_symbol_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_typed_array_desc =
            DECLARE_NAPI_METHOD("is_typed_array", lodash_is_typed_array);
            status = napi_define_properties(env, exports, 1, &is_typed_array_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_undefined_desc =
            DECLARE_NAPI_METHOD("is_undefined", lodash_is_undefined);
            status = napi_define_properties(env, exports, 1, &is_undefined_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_weak_map_desc =
            DECLARE_NAPI_METHOD("is_weak_map", lodash_is_weak_map);
            status = napi_define_properties(env, exports, 1, &is_weak_map_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor is_weak_set_desc =
            DECLARE_NAPI_METHOD("is_weak_set", lodash_is_weak_set);
            status = napi_define_properties(env, exports, 1, &is_weak_set_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor lt_desc =
            DECLARE_NAPI_METHOD("lt", lodash_lt);
            status = napi_define_properties(env, exports, 1, &lt_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor lte_desc =
            DECLARE_NAPI_METHOD("lte", lodash_lte);
            status = napi_define_properties(env, exports, 1, &lte_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_array_desc =
            DECLARE_NAPI_METHOD("to_array", lodash_to_array);
            status = napi_define_properties(env, exports, 1, &to_array_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_finite_desc =
            DECLARE_NAPI_METHOD("to_finite", lodash_to_finite);
            status = napi_define_properties(env, exports, 1, &to_finite_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_integer_desc =
            DECLARE_NAPI_METHOD("to_integer", lodash_to_integer);
            status = napi_define_properties(env, exports, 1, &to_integer_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_length_desc =
            DECLARE_NAPI_METHOD("to_length", lodash_to_length);
            status = napi_define_properties(env, exports, 1, &to_length_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_number_desc =
            DECLARE_NAPI_METHOD("to_number", lodash_to_number);
            status = napi_define_properties(env, exports, 1, &to_number_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_plain_object_desc =
            DECLARE_NAPI_METHOD("to_plain_object", lodash_to_plain_object);
            status = napi_define_properties(env, exports, 1, &to_plain_object_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_safe_integer_desc =
            DECLARE_NAPI_METHOD("to_safe_integer", lodash_to_safe_integer);
            status = napi_define_properties(env, exports, 1, &to_safe_integer_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_string_desc =
            DECLARE_NAPI_METHOD("to_string", lodash_to_string);
            status = napi_define_properties(env, exports, 1, &to_string_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor add_desc =
            DECLARE_NAPI_METHOD("add", lodash_add);
            status = napi_define_properties(env, exports, 1, &add_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor ceil_desc =
            DECLARE_NAPI_METHOD("ceil", lodash_ceil);
            status = napi_define_properties(env, exports, 1, &ceil_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor divide_desc =
            DECLARE_NAPI_METHOD("divide", lodash_divide);
            status = napi_define_properties(env, exports, 1, &divide_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor floor_desc =
            DECLARE_NAPI_METHOD("floor", lodash_floor);
            status = napi_define_properties(env, exports, 1, &floor_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor max_desc =
            DECLARE_NAPI_METHOD("max", lodash_max);
            status = napi_define_properties(env, exports, 1, &max_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor max_by_desc =
            DECLARE_NAPI_METHOD("max_by", lodash_max_by);
            status = napi_define_properties(env, exports, 1, &max_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor mean_desc =
            DECLARE_NAPI_METHOD("mean", lodash_mean);
            status = napi_define_properties(env, exports, 1, &mean_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor mean_by_desc =
            DECLARE_NAPI_METHOD("mean_by", lodash_mean_by);
            status = napi_define_properties(env, exports, 1, &mean_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor min_desc =
            DECLARE_NAPI_METHOD("min", lodash_min);
            status = napi_define_properties(env, exports, 1, &min_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor min_by_desc =
            DECLARE_NAPI_METHOD("min_by", lodash_min_by);
            status = napi_define_properties(env, exports, 1, &min_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor multiply_desc =
            DECLARE_NAPI_METHOD("multiply", lodash_multiply);
            status = napi_define_properties(env, exports, 1, &multiply_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor round_desc =
            DECLARE_NAPI_METHOD("round", lodash_round);
            status = napi_define_properties(env, exports, 1, &round_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor subtract_desc =
            DECLARE_NAPI_METHOD("subtract", lodash_subtract);
            status = napi_define_properties(env, exports, 1, &subtract_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sum_desc =
            DECLARE_NAPI_METHOD("sum", lodash_sum);
            status = napi_define_properties(env, exports, 1, &sum_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor sum_by_desc =
            DECLARE_NAPI_METHOD("sum_by", lodash_sum_by);
            status = napi_define_properties(env, exports, 1, &sum_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor clamp_desc =
            DECLARE_NAPI_METHOD("clamp", lodash_clamp);
            status = napi_define_properties(env, exports, 1, &clamp_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor in_range_desc =
            DECLARE_NAPI_METHOD("in_range", lodash_in_range);
            status = napi_define_properties(env, exports, 1, &in_range_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor random_desc =
            DECLARE_NAPI_METHOD("random", lodash_random);
            status = napi_define_properties(env, exports, 1, &random_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor assign_desc =
            DECLARE_NAPI_METHOD("assign", lodash_assign);
            status = napi_define_properties(env, exports, 1, &assign_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor assign_in_desc =
            DECLARE_NAPI_METHOD("assign_in", lodash_assign_in);
            status = napi_define_properties(env, exports, 1, &assign_in_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor assign_in_with_desc =
            DECLARE_NAPI_METHOD("assign_in_with", lodash_assign_in_with);
            status = napi_define_properties(env, exports, 1, &assign_in_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor assign_with_desc =
            DECLARE_NAPI_METHOD("assign_with", lodash_assign_with);
            status = napi_define_properties(env, exports, 1, &assign_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor at_desc =
            DECLARE_NAPI_METHOD("at", lodash_at);
            status = napi_define_properties(env, exports, 1, &at_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor create_desc =
            DECLARE_NAPI_METHOD("create", lodash_create);
            status = napi_define_properties(env, exports, 1, &create_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor defaults_desc =
            DECLARE_NAPI_METHOD("defaults", lodash_defaults);
            status = napi_define_properties(env, exports, 1, &defaults_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor defaults_deep_desc =
            DECLARE_NAPI_METHOD("defaults_deep", lodash_defaults_deep);
            status = napi_define_properties(env, exports, 1, &defaults_deep_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor find_key_desc =
            DECLARE_NAPI_METHOD("find_key", lodash_find_key);
            status = napi_define_properties(env, exports, 1, &find_key_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor find_last_key_desc =
            DECLARE_NAPI_METHOD("find_last_key", lodash_find_last_key);
            status = napi_define_properties(env, exports, 1, &find_last_key_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor for_in_desc =
            DECLARE_NAPI_METHOD("for_in", lodash_for_in);
            status = napi_define_properties(env, exports, 1, &for_in_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor for_in_right_desc =
            DECLARE_NAPI_METHOD("for_in_right", lodash_for_in_right);
            status = napi_define_properties(env, exports, 1, &for_in_right_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor for_own_desc =
            DECLARE_NAPI_METHOD("for_own", lodash_for_own);
            status = napi_define_properties(env, exports, 1, &for_own_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor for_own_right_desc =
            DECLARE_NAPI_METHOD("for_own_right", lodash_for_own_right);
            status = napi_define_properties(env, exports, 1, &for_own_right_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor functions_desc =
            DECLARE_NAPI_METHOD("functions", lodash_functions);
            status = napi_define_properties(env, exports, 1, &functions_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor functions_in_desc =
            DECLARE_NAPI_METHOD("functions_in", lodash_functions_in);
            status = napi_define_properties(env, exports, 1, &functions_in_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor get_desc =
            DECLARE_NAPI_METHOD("get", lodash_get);
            status = napi_define_properties(env, exports, 1, &get_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor has_desc =
            DECLARE_NAPI_METHOD("has", lodash_has);
            status = napi_define_properties(env, exports, 1, &has_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor has_in_desc =
            DECLARE_NAPI_METHOD("has_in", lodash_has_in);
            status = napi_define_properties(env, exports, 1, &has_in_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor invert_desc =
            DECLARE_NAPI_METHOD("invert", lodash_invert);
            status = napi_define_properties(env, exports, 1, &invert_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor invert_by_desc =
            DECLARE_NAPI_METHOD("invert_by", lodash_invert_by);
            status = napi_define_properties(env, exports, 1, &invert_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor invoke_desc =
            DECLARE_NAPI_METHOD("invoke", lodash_invoke);
            status = napi_define_properties(env, exports, 1, &invoke_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor keys_desc =
            DECLARE_NAPI_METHOD("keys", lodash_keys);
            status = napi_define_properties(env, exports, 1, &keys_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor keys_in_desc =
            DECLARE_NAPI_METHOD("keys_in", lodash_keys_in);
            status = napi_define_properties(env, exports, 1, &keys_in_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor map_keys_desc =
            DECLARE_NAPI_METHOD("map_keys", lodash_map_keys);
            status = napi_define_properties(env, exports, 1, &map_keys_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor map_values_desc =
            DECLARE_NAPI_METHOD("map_values", lodash_map_values);
            status = napi_define_properties(env, exports, 1, &map_values_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor merge_desc =
            DECLARE_NAPI_METHOD("merge", lodash_merge);
            status = napi_define_properties(env, exports, 1, &merge_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor merge_with_desc =
            DECLARE_NAPI_METHOD("merge_with", lodash_merge_with);
            status = napi_define_properties(env, exports, 1, &merge_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor omit_desc =
            DECLARE_NAPI_METHOD("omit", lodash_omit);
            status = napi_define_properties(env, exports, 1, &omit_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor omit_by_desc =
            DECLARE_NAPI_METHOD("omit_by", lodash_omit_by);
            status = napi_define_properties(env, exports, 1, &omit_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor pick_desc =
            DECLARE_NAPI_METHOD("pick", lodash_pick);
            status = napi_define_properties(env, exports, 1, &pick_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor pick_by_desc =
            DECLARE_NAPI_METHOD("pick_by", lodash_pick_by);
            status = napi_define_properties(env, exports, 1, &pick_by_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor result_desc =
            DECLARE_NAPI_METHOD("result", lodash_result);
            status = napi_define_properties(env, exports, 1, &result_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor set_desc =
            DECLARE_NAPI_METHOD("set", lodash_set);
            status = napi_define_properties(env, exports, 1, &set_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor set_with_desc =
            DECLARE_NAPI_METHOD("set_with", lodash_set_with);
            status = napi_define_properties(env, exports, 1, &set_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_pairs_desc =
            DECLARE_NAPI_METHOD("to_pairs", lodash_to_pairs);
            status = napi_define_properties(env, exports, 1, &to_pairs_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_pairs_in_desc =
            DECLARE_NAPI_METHOD("to_pairs_in", lodash_to_pairs_in);
            status = napi_define_properties(env, exports, 1, &to_pairs_in_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor transform_desc =
            DECLARE_NAPI_METHOD("transform", lodash_transform);
            status = napi_define_properties(env, exports, 1, &transform_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor unset_desc =
            DECLARE_NAPI_METHOD("unset", lodash_unset);
            status = napi_define_properties(env, exports, 1, &unset_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor update_desc =
            DECLARE_NAPI_METHOD("update", lodash_update);
            status = napi_define_properties(env, exports, 1, &update_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor update_with_desc =
            DECLARE_NAPI_METHOD("update_with", lodash_update_with);
            status = napi_define_properties(env, exports, 1, &update_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor values_desc =
            DECLARE_NAPI_METHOD("values", lodash_values);
            status = napi_define_properties(env, exports, 1, &values_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor values_in_desc =
            DECLARE_NAPI_METHOD("values_in", lodash_values_in);
            status = napi_define_properties(env, exports, 1, &values_in_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor camel_case_desc =
            DECLARE_NAPI_METHOD("camel_case", lodash_camel_case);
            status = napi_define_properties(env, exports, 1, &camel_case_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor capitalize_desc =
            DECLARE_NAPI_METHOD("capitalize", lodash_capitalize);
            status = napi_define_properties(env, exports, 1, &capitalize_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor deburr_desc =
            DECLARE_NAPI_METHOD("deburr", lodash_deburr);
            status = napi_define_properties(env, exports, 1, &deburr_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor ends_with_desc =
            DECLARE_NAPI_METHOD("ends_with", lodash_ends_with);
            status = napi_define_properties(env, exports, 1, &ends_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor escape_desc =
            DECLARE_NAPI_METHOD("escape", lodash_escape);
            status = napi_define_properties(env, exports, 1, &escape_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor escape_reg_exp_desc =
            DECLARE_NAPI_METHOD("escape_reg_exp", lodash_escape_reg_exp);
            status = napi_define_properties(env, exports, 1, &escape_reg_exp_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor kebab_case_desc =
            DECLARE_NAPI_METHOD("kebab_case", lodash_kebab_case);
            status = napi_define_properties(env, exports, 1, &kebab_case_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor lower_case_desc =
            DECLARE_NAPI_METHOD("lower_case", lodash_lower_case);
            status = napi_define_properties(env, exports, 1, &lower_case_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor lower_first_desc =
            DECLARE_NAPI_METHOD("lower_first", lodash_lower_first);
            status = napi_define_properties(env, exports, 1, &lower_first_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor pad_desc =
            DECLARE_NAPI_METHOD("pad", lodash_pad);
            status = napi_define_properties(env, exports, 1, &pad_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor pad_end_desc =
            DECLARE_NAPI_METHOD("pad_end", lodash_pad_end);
            status = napi_define_properties(env, exports, 1, &pad_end_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor pad_start_desc =
            DECLARE_NAPI_METHOD("pad_start", lodash_pad_start);
            status = napi_define_properties(env, exports, 1, &pad_start_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor parse_int_desc =
            DECLARE_NAPI_METHOD("parse_int", lodash_parse_int);
            status = napi_define_properties(env, exports, 1, &parse_int_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor repeat_desc =
            DECLARE_NAPI_METHOD("repeat", lodash_repeat);
            status = napi_define_properties(env, exports, 1, &repeat_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor replace_desc =
            DECLARE_NAPI_METHOD("replace", lodash_replace);
            status = napi_define_properties(env, exports, 1, &replace_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor snake_case_desc =
            DECLARE_NAPI_METHOD("snake_case", lodash_snake_case);
            status = napi_define_properties(env, exports, 1, &snake_case_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor split_desc =
            DECLARE_NAPI_METHOD("split", lodash_split);
            status = napi_define_properties(env, exports, 1, &split_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor start_case_desc =
            DECLARE_NAPI_METHOD("start_case", lodash_start_case);
            status = napi_define_properties(env, exports, 1, &start_case_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor starts_with_desc =
            DECLARE_NAPI_METHOD("starts_with", lodash_starts_with);
            status = napi_define_properties(env, exports, 1, &starts_with_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor template_desc =
            DECLARE_NAPI_METHOD("template", lodash_template);
            status = napi_define_properties(env, exports, 1, &template_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_lower_desc =
            DECLARE_NAPI_METHOD("to_lower", lodash_to_lower);
            status = napi_define_properties(env, exports, 1, &to_lower_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_upper_desc =
            DECLARE_NAPI_METHOD("to_upper", lodash_to_upper);
            status = napi_define_properties(env, exports, 1, &to_upper_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor trim_desc =
            DECLARE_NAPI_METHOD("trim", lodash_trim);
            status = napi_define_properties(env, exports, 1, &trim_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor trim_end_desc =
            DECLARE_NAPI_METHOD("trim_end", lodash_trim_end);
            status = napi_define_properties(env, exports, 1, &trim_end_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor trim_start_desc =
            DECLARE_NAPI_METHOD("trim_start", lodash_trim_start);
            status = napi_define_properties(env, exports, 1, &trim_start_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor truncate_desc =
            DECLARE_NAPI_METHOD("truncate", lodash_truncate);
            status = napi_define_properties(env, exports, 1, &truncate_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor unescape_desc =
            DECLARE_NAPI_METHOD("unescape", lodash_unescape);
            status = napi_define_properties(env, exports, 1, &unescape_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor upper_case_desc =
            DECLARE_NAPI_METHOD("upper_case", lodash_upper_case);
            status = napi_define_properties(env, exports, 1, &upper_case_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor upper_first_desc =
            DECLARE_NAPI_METHOD("upper_first", lodash_upper_first);
            status = napi_define_properties(env, exports, 1, &upper_first_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor words_desc =
            DECLARE_NAPI_METHOD("words", lodash_words);
            status = napi_define_properties(env, exports, 1, &words_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor attempt_desc =
            DECLARE_NAPI_METHOD("attempt", lodash_attempt);
            status = napi_define_properties(env, exports, 1, &attempt_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor bind_all_desc =
            DECLARE_NAPI_METHOD("bind_all", lodash_bind_all);
            status = napi_define_properties(env, exports, 1, &bind_all_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor cond_desc =
            DECLARE_NAPI_METHOD("cond", lodash_cond);
            status = napi_define_properties(env, exports, 1, &cond_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor conforms_desc =
            DECLARE_NAPI_METHOD("conforms", lodash_conforms);
            status = napi_define_properties(env, exports, 1, &conforms_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor constant_desc =
            DECLARE_NAPI_METHOD("constant", lodash_constant);
            status = napi_define_properties(env, exports, 1, &constant_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor default_to_desc =
            DECLARE_NAPI_METHOD("default_to", lodash_default_to);
            status = napi_define_properties(env, exports, 1, &default_to_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor flow_desc =
            DECLARE_NAPI_METHOD("flow", lodash_flow);
            status = napi_define_properties(env, exports, 1, &flow_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor flow_right_desc =
            DECLARE_NAPI_METHOD("flow_right", lodash_flow_right);
            status = napi_define_properties(env, exports, 1, &flow_right_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor identity_desc =
            DECLARE_NAPI_METHOD("identity", lodash_identity);
            status = napi_define_properties(env, exports, 1, &identity_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor iteratee_desc =
            DECLARE_NAPI_METHOD("iteratee", lodash_iteratee);
            status = napi_define_properties(env, exports, 1, &iteratee_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor matches_desc =
            DECLARE_NAPI_METHOD("matches", lodash_matches);
            status = napi_define_properties(env, exports, 1, &matches_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor matches_property_desc =
            DECLARE_NAPI_METHOD("matches_property", lodash_matches_property);
            status = napi_define_properties(env, exports, 1, &matches_property_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor method_desc =
            DECLARE_NAPI_METHOD("method", lodash_method);
            status = napi_define_properties(env, exports, 1, &method_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor method_of_desc =
            DECLARE_NAPI_METHOD("method_of", lodash_method_of);
            status = napi_define_properties(env, exports, 1, &method_of_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor mixin_desc =
            DECLARE_NAPI_METHOD("mixin", lodash_mixin);
            status = napi_define_properties(env, exports, 1, &mixin_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor no_conflict_desc =
            DECLARE_NAPI_METHOD("no_conflict", lodash_no_conflict);
            status = napi_define_properties(env, exports, 1, &no_conflict_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor noop_desc =
            DECLARE_NAPI_METHOD("noop", lodash_noop);
            status = napi_define_properties(env, exports, 1, &noop_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor nth_arg_desc =
            DECLARE_NAPI_METHOD("nth_arg", lodash_nth_arg);
            status = napi_define_properties(env, exports, 1, &nth_arg_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor over_desc =
            DECLARE_NAPI_METHOD("over", lodash_over);
            status = napi_define_properties(env, exports, 1, &over_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor over_every_desc =
            DECLARE_NAPI_METHOD("over_every", lodash_over_every);
            status = napi_define_properties(env, exports, 1, &over_every_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor over_some_desc =
            DECLARE_NAPI_METHOD("over_some", lodash_over_some);
            status = napi_define_properties(env, exports, 1, &over_some_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor property_desc =
            DECLARE_NAPI_METHOD("property", lodash_property);
            status = napi_define_properties(env, exports, 1, &property_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor property_of_desc =
            DECLARE_NAPI_METHOD("property_of", lodash_property_of);
            status = napi_define_properties(env, exports, 1, &property_of_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor range_desc =
            DECLARE_NAPI_METHOD("range", lodash_range);
            status = napi_define_properties(env, exports, 1, &range_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor range_right_desc =
            DECLARE_NAPI_METHOD("range_right", lodash_range_right);
            status = napi_define_properties(env, exports, 1, &range_right_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor run_in_context_desc =
            DECLARE_NAPI_METHOD("run_in_context", lodash_run_in_context);
            status = napi_define_properties(env, exports, 1, &run_in_context_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor stub_array_desc =
            DECLARE_NAPI_METHOD("stub_array", lodash_stub_array);
            status = napi_define_properties(env, exports, 1, &stub_array_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor stub_false_desc =
            DECLARE_NAPI_METHOD("stub_false", lodash_stub_false);
            status = napi_define_properties(env, exports, 1, &stub_false_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor stub_object_desc =
            DECLARE_NAPI_METHOD("stub_object", lodash_stub_object);
            status = napi_define_properties(env, exports, 1, &stub_object_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor stub_string_desc =
            DECLARE_NAPI_METHOD("stub_string", lodash_stub_string);
            status = napi_define_properties(env, exports, 1, &stub_string_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor stub_true_desc =
            DECLARE_NAPI_METHOD("stub_true", lodash_stub_true);
            status = napi_define_properties(env, exports, 1, &stub_true_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor times_desc =
            DECLARE_NAPI_METHOD("times", lodash_times);
            status = napi_define_properties(env, exports, 1, &times_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor to_path_desc =
            DECLARE_NAPI_METHOD("to_path", lodash_to_path);
            status = napi_define_properties(env, exports, 1, &to_path_desc);
            assert(status == napi_ok);
        

            napi_property_descriptor unique_id_desc =
            DECLARE_NAPI_METHOD("unique_id", lodash_unique_id);
            status = napi_define_properties(env, exports, 1, &unique_id_desc);
            assert(status == napi_ok);
        

  return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)
