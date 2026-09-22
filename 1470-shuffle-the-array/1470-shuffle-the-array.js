/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
    let left = 0, right = n;
    let arr = [];
    let i = 0;

    while(left < n){
        arr[i++] = nums[left++];
        arr[i++] = nums[right++];
    }

    return arr;
};