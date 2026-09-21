/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    const len = nums.length;
    let ans = [];

    for(let i = 0; i < len; i++){
        ans[i] = nums[i];
        ans[len + i] = nums[i];
    }

    return ans;
};