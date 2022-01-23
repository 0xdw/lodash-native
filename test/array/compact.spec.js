const { assert } = require("chai");
const { compact } = require("../../src/binding");

describe("compact", () => {
    const falsy = [, null, undefined, false, 0, -0, 0n, NaN, ''];
    it('should filter falsy values', function () {
        const array = ['0', '1', '2'];
        assert.deepStrictEqual(compact(falsy.concat(array)), array);
    });
});
