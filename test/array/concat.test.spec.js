const { assert } = require("chai");
const { concat } = require("../../src/binding");

describe("concat", () => {
    it('should shallow clone `array`', function () {
        var array = [1, 2, 3],
            actual = concat(array);

        assert.deepStrictEqual(actual, array);
        assert.notStrictEqual(actual, array);
    });

    it('should concat arrays and values', function () {
        var array = [1],
            actual = concat(array, 2, [3], [[4]]);

        assert.deepStrictEqual(actual, [1, 2, 3, [4]]);
        assert.deepStrictEqual(array, [1]);
    });

    it('should cast non-array `array` values to arrays', function () {
        var values = [, null, undefined, false, true, 1, NaN, 'a'];

        var expected = values.map(function (value, index) {
            return index ? [value] : [];
        });

        var actual = values.map(function (value, index) {
            return index ? concat(value) : concat();
        });

        assert.deepStrictEqual(actual, expected);

        expected = values.map(function (value) {
            return [value, 2, [3]];
        });

        actual = values.map(function (value) {
            return concat(value, [2], [[3]]);
        });

        assert.deepStrictEqual(actual, expected);
    });

    it('should treat sparse arrays as dense', function () {
        var expected = [],
            actual = concat(Array(1), Array(1));

        expected.push(undefined, undefined);

        assert.ok('0' in actual);
        assert.ok('1' in actual);
        assert.deepStrictEqual(actual, expected);
    });

    it('should return a new wrapped array', function () {
        var array = [1],
            wrapped = array.concat([2, 3]);

        assert.deepEqual(array, [1]);
        assert.deepEqual(wrapped, [1, 2, 3]);
    });
});
