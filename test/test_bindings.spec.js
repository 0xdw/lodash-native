const { assert } = require("chai");

const lodash_native = require("../src/binding");

describe("check for bindings", () => {
    it("chunk", () => assert.exists(lodash_native.chunk));
    it("compact", () => assert.exists(lodash_native.compact));
    it("concat", () => assert.exists(lodash_native.concat));
    it("difference", () => assert.exists(lodash_native.difference));
    it("difference_by", () => assert.exists(lodash_native.difference_by));
    it("difference_with", () => assert.exists(lodash_native.difference_with));
    it("drop", () => assert.exists(lodash_native.drop));
    it("drop_right", () => assert.exists(lodash_native.drop_right));
    it("drop_right_while", () => assert.exists(lodash_native.drop_right_while));
    it("drop_while", () => assert.exists(lodash_native.drop_while));
    it("fill", () => assert.exists(lodash_native.fill));
    it("find_index", () => assert.exists(lodash_native.find_index));
    it("find_last_index", () => assert.exists(lodash_native.find_last_index));
    it("flatten", () => assert.exists(lodash_native.flatten));
    it("flatten_deep", () => assert.exists(lodash_native.flatten_deep));
    it("flatten_depth", () => assert.exists(lodash_native.flatten_depth));
    it("from_pairs", () => assert.exists(lodash_native.from_pairs));
    it("head", () => assert.exists(lodash_native.head));
    it("index_of", () => assert.exists(lodash_native.index_of));
    it("initial", () => assert.exists(lodash_native.initial));
    it("intersection", () => assert.exists(lodash_native.intersection));
    it("intersection_by", () => assert.exists(lodash_native.intersection_by));
    it("intersection_with", () => assert.exists(lodash_native.intersection_with));
    it("join", () => assert.exists(lodash_native.join));
    it("last", () => assert.exists(lodash_native.last));
    it("last_index_of", () => assert.exists(lodash_native.last_index_of));
    it("nth", () => assert.exists(lodash_native.nth));
    it("pull", () => assert.exists(lodash_native.pull));
    it("pull_all", () => assert.exists(lodash_native.pull_all));
    it("pull_all_by", () => assert.exists(lodash_native.pull_all_by));
    it("pull_all_with", () => assert.exists(lodash_native.pull_all_with));
    it("pull_at", () => assert.exists(lodash_native.pull_at));
    it("remove", () => assert.exists(lodash_native.remove));
    it("reverse", () => assert.exists(lodash_native.reverse));
    it("slice", () => assert.exists(lodash_native.slice));
    it("sorted_index", () => assert.exists(lodash_native.sorted_index));
    it("sorted_index_by", () => assert.exists(lodash_native.sorted_index_by));
    it("sorted_index_of", () => assert.exists(lodash_native.sorted_index_of));
    it("sorted_last_index", () => assert.exists(lodash_native.sorted_last_index));
    it("sorted_last_index_by", () => assert.exists(lodash_native.sorted_last_index_by));
    it("sorted_last_index_of", () => assert.exists(lodash_native.sorted_last_index_of));
    it("sorted_uniq", () => assert.exists(lodash_native.sorted_uniq));
    it("sorted_uniq_by", () => assert.exists(lodash_native.sorted_uniq_by));
    it("tail", () => assert.exists(lodash_native.tail));
    it("take", () => assert.exists(lodash_native.take));
    it("take_right", () => assert.exists(lodash_native.take_right));
    it("take_right_while", () => assert.exists(lodash_native.take_right_while));
    it("take_while", () => assert.exists(lodash_native.take_while));
    it("union", () => assert.exists(lodash_native.union));
    it("union_by", () => assert.exists(lodash_native.union_by));
    it("union_with", () => assert.exists(lodash_native.union_with));
    it("uniq", () => assert.exists(lodash_native.uniq));
    it("uniq_by", () => assert.exists(lodash_native.uniq_by));
    it("uniq_with", () => assert.exists(lodash_native.uniq_with));
    it("unzip", () => assert.exists(lodash_native.unzip));
    it("unzip_with", () => assert.exists(lodash_native.unzip_with));
    it("without", () => assert.exists(lodash_native.without));
    it("xor", () => assert.exists(lodash_native.xor));
    it("xor_by", () => assert.exists(lodash_native.xor_by));
    it("xor_with", () => assert.exists(lodash_native.xor_with));
    it("zip", () => assert.exists(lodash_native.zip));
    it("zip_object", () => assert.exists(lodash_native.zip_object));
    it("zip_object_deep", () => assert.exists(lodash_native.zip_object_deep));
    it("zip_with", () => assert.exists(lodash_native.zip_with));
    it("count_by", () => assert.exists(lodash_native.count_by));
    it("every", () => assert.exists(lodash_native.every));
    it("filter", () => assert.exists(lodash_native.filter));
    it("find", () => assert.exists(lodash_native.find));
    it("find_last", () => assert.exists(lodash_native.find_last));
    it("flat_map", () => assert.exists(lodash_native.flat_map));
    it("flat_map_deep", () => assert.exists(lodash_native.flat_map_deep));
    it("flat_map_depth", () => assert.exists(lodash_native.flat_map_depth));
    it("for_each", () => assert.exists(lodash_native.for_each));
    it("for_each_right", () => assert.exists(lodash_native.for_each_right));
    it("group_by", () => assert.exists(lodash_native.group_by));
    it("includes", () => assert.exists(lodash_native.includes));
    it("invoke_map", () => assert.exists(lodash_native.invoke_map));
    it("key_by", () => assert.exists(lodash_native.key_by));
    it("map", () => assert.exists(lodash_native.map));
    it("order_by", () => assert.exists(lodash_native.order_by));
    it("partition", () => assert.exists(lodash_native.partition));
    it("reduce", () => assert.exists(lodash_native.reduce));
    it("reduce_right", () => assert.exists(lodash_native.reduce_right));
    it("reject", () => assert.exists(lodash_native.reject));
    it("sample", () => assert.exists(lodash_native.sample));
    it("sample_size", () => assert.exists(lodash_native.sample_size));
    it("shuffle", () => assert.exists(lodash_native.shuffle));
    it("size", () => assert.exists(lodash_native.size));
    it("some", () => assert.exists(lodash_native.some));
    it("sort_by", () => assert.exists(lodash_native.sort_by));
    it("now", () => assert.exists(lodash_native.now));
    it("after", () => assert.exists(lodash_native.after));
    it("ary", () => assert.exists(lodash_native.ary));
    it("before", () => assert.exists(lodash_native.before));
    it("bind", () => assert.exists(lodash_native.bind));
    it("bind_key", () => assert.exists(lodash_native.bind_key));
    it("curry", () => assert.exists(lodash_native.curry));
    it("curry_right", () => assert.exists(lodash_native.curry_right));
    it("debounce", () => assert.exists(lodash_native.debounce));
    it("defer", () => assert.exists(lodash_native.defer));
    it("delay", () => assert.exists(lodash_native.delay));
    it("flip", () => assert.exists(lodash_native.flip));
    it("memoize", () => assert.exists(lodash_native.memoize));
    it("negate", () => assert.exists(lodash_native.negate));
    it("once", () => assert.exists(lodash_native.once));
    it("over_args", () => assert.exists(lodash_native.over_args));
    it("partial", () => assert.exists(lodash_native.partial));
    it("partial_right", () => assert.exists(lodash_native.partial_right));
    it("rearg", () => assert.exists(lodash_native.rearg));
    it("rest", () => assert.exists(lodash_native.rest));
    it("spread", () => assert.exists(lodash_native.spread));
    it("throttle", () => assert.exists(lodash_native.throttle));
    it("unary", () => assert.exists(lodash_native.unary));
    it("wrap", () => assert.exists(lodash_native.wrap));
    it("cast_array", () => assert.exists(lodash_native.cast_array));
    it("clone", () => assert.exists(lodash_native.clone));
    it("clone_deep", () => assert.exists(lodash_native.clone_deep));
    it("clone_deep_with", () => assert.exists(lodash_native.clone_deep_with));
    it("clone_with", () => assert.exists(lodash_native.clone_with));
    it("conforms_to", () => assert.exists(lodash_native.conforms_to));
    it("eq", () => assert.exists(lodash_native.eq));
    it("gt", () => assert.exists(lodash_native.gt));
    it("gte", () => assert.exists(lodash_native.gte));
    it("is_arguments", () => assert.exists(lodash_native.is_arguments));
    it("is_array", () => assert.exists(lodash_native.is_array));
    it("is_array_buffer", () => assert.exists(lodash_native.is_array_buffer));
    it("is_array_like", () => assert.exists(lodash_native.is_array_like));
    it("is_array_like_object", () => assert.exists(lodash_native.is_array_like_object));
    it("is_boolean", () => assert.exists(lodash_native.is_boolean));
    it("is_buffer", () => assert.exists(lodash_native.is_buffer));
    it("is_date", () => assert.exists(lodash_native.is_date));
    it("is_element", () => assert.exists(lodash_native.is_element));
    it("is_empty", () => assert.exists(lodash_native.is_empty));
    it("is_equal", () => assert.exists(lodash_native.is_equal));
    it("is_equal_with", () => assert.exists(lodash_native.is_equal_with));
    it("is_error", () => assert.exists(lodash_native.is_error));
    it("is_finite", () => assert.exists(lodash_native.is_finite));
    it("is_function", () => assert.exists(lodash_native.is_function));
    it("is_integer", () => assert.exists(lodash_native.is_integer));
    it("is_length", () => assert.exists(lodash_native.is_length));
    it("is_map", () => assert.exists(lodash_native.is_map));
    it("is_match", () => assert.exists(lodash_native.is_match));
    it("is_match_with", () => assert.exists(lodash_native.is_match_with));
    it("is_na_n", () => assert.exists(lodash_native.is_na_n));
    it("is_native", () => assert.exists(lodash_native.is_native));
    it("is_nil", () => assert.exists(lodash_native.is_nil));
    it("is_null", () => assert.exists(lodash_native.is_null));
    it("is_number", () => assert.exists(lodash_native.is_number));
    it("is_object", () => assert.exists(lodash_native.is_object));
    it("is_object_like", () => assert.exists(lodash_native.is_object_like));
    it("is_plain_object", () => assert.exists(lodash_native.is_plain_object));
    it("is_reg_exp", () => assert.exists(lodash_native.is_reg_exp));
    it("is_safe_integer", () => assert.exists(lodash_native.is_safe_integer));
    it("is_set", () => assert.exists(lodash_native.is_set));
    it("is_string", () => assert.exists(lodash_native.is_string));
    it("is_symbol", () => assert.exists(lodash_native.is_symbol));
    it("is_typed_array", () => assert.exists(lodash_native.is_typed_array));
    it("is_undefined", () => assert.exists(lodash_native.is_undefined));
    it("is_weak_map", () => assert.exists(lodash_native.is_weak_map));
    it("is_weak_set", () => assert.exists(lodash_native.is_weak_set));
    it("lt", () => assert.exists(lodash_native.lt));
    it("lte", () => assert.exists(lodash_native.lte));
    it("to_array", () => assert.exists(lodash_native.to_array));
    it("to_finite", () => assert.exists(lodash_native.to_finite));
    it("to_integer", () => assert.exists(lodash_native.to_integer));
    it("to_length", () => assert.exists(lodash_native.to_length));
    it("to_number", () => assert.exists(lodash_native.to_number));
    it("to_plain_object", () => assert.exists(lodash_native.to_plain_object));
    it("to_safe_integer", () => assert.exists(lodash_native.to_safe_integer));
    it("to_string", () => assert.exists(lodash_native.to_string));
    it("add", () => assert.exists(lodash_native.add));
    it("ceil", () => assert.exists(lodash_native.ceil));
    it("divide", () => assert.exists(lodash_native.divide));
    it("floor", () => assert.exists(lodash_native.floor));
    it("max", () => assert.exists(lodash_native.max));
    it("max_by", () => assert.exists(lodash_native.max_by));
    it("mean", () => assert.exists(lodash_native.mean));
    it("mean_by", () => assert.exists(lodash_native.mean_by));
    it("min", () => assert.exists(lodash_native.min));
    it("min_by", () => assert.exists(lodash_native.min_by));
    it("multiply", () => assert.exists(lodash_native.multiply));
    it("round", () => assert.exists(lodash_native.round));
    it("subtract", () => assert.exists(lodash_native.subtract));
    it("sum", () => assert.exists(lodash_native.sum));
    it("sum_by", () => assert.exists(lodash_native.sum_by));
    it("clamp", () => assert.exists(lodash_native.clamp));
    it("in_range", () => assert.exists(lodash_native.in_range));
    it("random", () => assert.exists(lodash_native.random));
    it("assign", () => assert.exists(lodash_native.assign));
    it("assign_in", () => assert.exists(lodash_native.assign_in));
    it("assign_in_with", () => assert.exists(lodash_native.assign_in_with));
    it("assign_with", () => assert.exists(lodash_native.assign_with));
    it("at", () => assert.exists(lodash_native.at));
    it("create", () => assert.exists(lodash_native.create));
    it("defaults", () => assert.exists(lodash_native.defaults));
    it("defaults_deep", () => assert.exists(lodash_native.defaults_deep));
    it("find_key", () => assert.exists(lodash_native.find_key));
    it("find_last_key", () => assert.exists(lodash_native.find_last_key));
    it("for_in", () => assert.exists(lodash_native.for_in));
    it("for_in_right", () => assert.exists(lodash_native.for_in_right));
    it("for_own", () => assert.exists(lodash_native.for_own));
    it("for_own_right", () => assert.exists(lodash_native.for_own_right));
    it("functions", () => assert.exists(lodash_native.functions));
    it("functions_in", () => assert.exists(lodash_native.functions_in));
    it("get", () => assert.exists(lodash_native.get));
    it("has", () => assert.exists(lodash_native.has));
    it("has_in", () => assert.exists(lodash_native.has_in));
    it("invert", () => assert.exists(lodash_native.invert));
    it("invert_by", () => assert.exists(lodash_native.invert_by));
    it("invoke", () => assert.exists(lodash_native.invoke));
    it("keys", () => assert.exists(lodash_native.keys));
    it("keys_in", () => assert.exists(lodash_native.keys_in));
    it("map_keys", () => assert.exists(lodash_native.map_keys));
    it("map_values", () => assert.exists(lodash_native.map_values));
    it("merge", () => assert.exists(lodash_native.merge));
    it("merge_with", () => assert.exists(lodash_native.merge_with));
    it("omit", () => assert.exists(lodash_native.omit));
    it("omit_by", () => assert.exists(lodash_native.omit_by));
    it("pick", () => assert.exists(lodash_native.pick));
    it("pick_by", () => assert.exists(lodash_native.pick_by));
    it("result", () => assert.exists(lodash_native.result));
    it("set", () => assert.exists(lodash_native.set));
    it("set_with", () => assert.exists(lodash_native.set_with));
    it("to_pairs", () => assert.exists(lodash_native.to_pairs));
    it("to_pairs_in", () => assert.exists(lodash_native.to_pairs_in));
    it("transform", () => assert.exists(lodash_native.transform));
    it("unset", () => assert.exists(lodash_native.unset));
    it("update", () => assert.exists(lodash_native.update));
    it("update_with", () => assert.exists(lodash_native.update_with));
    it("values", () => assert.exists(lodash_native.values));
    it("values_in", () => assert.exists(lodash_native.values_in));
    it("camel_case", () => assert.exists(lodash_native.camel_case));
    it("capitalize", () => assert.exists(lodash_native.capitalize));
    it("deburr", () => assert.exists(lodash_native.deburr));
    it("ends_with", () => assert.exists(lodash_native.ends_with));
    it("escape", () => assert.exists(lodash_native.escape));
    it("escape_reg_exp", () => assert.exists(lodash_native.escape_reg_exp));
    it("kebab_case", () => assert.exists(lodash_native.kebab_case));
    it("lower_case", () => assert.exists(lodash_native.lower_case));
    it("lower_first", () => assert.exists(lodash_native.lower_first));
    it("pad", () => assert.exists(lodash_native.pad));
    it("pad_end", () => assert.exists(lodash_native.pad_end));
    it("pad_start", () => assert.exists(lodash_native.pad_start));
    it("parse_int", () => assert.exists(lodash_native.parse_int));
    it("repeat", () => assert.exists(lodash_native.repeat));
    it("replace", () => assert.exists(lodash_native.replace));
    it("snake_case", () => assert.exists(lodash_native.snake_case));
    it("split", () => assert.exists(lodash_native.split));
    it("start_case", () => assert.exists(lodash_native.start_case));
    it("starts_with", () => assert.exists(lodash_native.starts_with));
    it("template", () => assert.exists(lodash_native.template));
    it("to_lower", () => assert.exists(lodash_native.to_lower));
    it("to_upper", () => assert.exists(lodash_native.to_upper));
    it("trim", () => assert.exists(lodash_native.trim));
    it("trim_end", () => assert.exists(lodash_native.trim_end));
    it("trim_start", () => assert.exists(lodash_native.trim_start));
    it("truncate", () => assert.exists(lodash_native.truncate));
    it("unescape", () => assert.exists(lodash_native.unescape));
    it("upper_case", () => assert.exists(lodash_native.upper_case));
    it("upper_first", () => assert.exists(lodash_native.upper_first));
    it("words", () => assert.exists(lodash_native.words));
    it("attempt", () => assert.exists(lodash_native.attempt));
    it("bind_all", () => assert.exists(lodash_native.bind_all));
    it("cond", () => assert.exists(lodash_native.cond));
    it("conforms", () => assert.exists(lodash_native.conforms));
    it("constant", () => assert.exists(lodash_native.constant));
    it("default_to", () => assert.exists(lodash_native.default_to));
    it("flow", () => assert.exists(lodash_native.flow));
    it("flow_right", () => assert.exists(lodash_native.flow_right));
    it("identity", () => assert.exists(lodash_native.identity));
    it("iteratee", () => assert.exists(lodash_native.iteratee));
    it("matches", () => assert.exists(lodash_native.matches));
    it("matches_property", () => assert.exists(lodash_native.matches_property));
    it("method", () => assert.exists(lodash_native.method));
    it("method_of", () => assert.exists(lodash_native.method_of));
    it("mixin", () => assert.exists(lodash_native.mixin));
    it("no_conflict", () => assert.exists(lodash_native.no_conflict));
    it("noop", () => assert.exists(lodash_native.noop));
    it("nth_arg", () => assert.exists(lodash_native.nth_arg));
    it("over", () => assert.exists(lodash_native.over));
    it("over_every", () => assert.exists(lodash_native.over_every));
    it("over_some", () => assert.exists(lodash_native.over_some));
    it("property", () => assert.exists(lodash_native.property));
    it("property_of", () => assert.exists(lodash_native.property_of));
    it("range", () => assert.exists(lodash_native.range));
    it("range_right", () => assert.exists(lodash_native.range_right));
    it("run_in_context", () => assert.exists(lodash_native.run_in_context));
    it("stub_array", () => assert.exists(lodash_native.stub_array));
    it("stub_false", () => assert.exists(lodash_native.stub_false));
    it("stub_object", () => assert.exists(lodash_native.stub_object));
    it("stub_string", () => assert.exists(lodash_native.stub_string));
    it("stub_true", () => assert.exists(lodash_native.stub_true));
    it("times", () => assert.exists(lodash_native.times));
    it("to_path", () => assert.exists(lodash_native.to_path));
    it("unique_id", () => assert.exists(lodash_native.unique_id));
});
