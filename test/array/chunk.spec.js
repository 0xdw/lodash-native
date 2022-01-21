const { assert } = require("chai");
const { chunk } = require("../../src/binding");

describe("chunk", () => {
    const array = [0, 1, 2, 3, 4, 5];
    it('should return chunked arrays', function () {
        const actual = chunk(array, 3);
        assert.deepStrictEqual(actual, [[0, 1, 2], [3, 4, 5]]);
    });

    it('should return the last chunk as remaining elements', function () {
        const actual = chunk(array, 4);
        assert.deepStrictEqual(actual, [[0, 1, 2, 3], [4, 5]]);
    });
});
