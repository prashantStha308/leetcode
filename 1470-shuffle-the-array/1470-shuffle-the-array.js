/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
    // use two pointers for this
    // one that looks from begenning of the arr, another from nth place

    // let left = 0, right = n;
    let arr = [];
    let count = 0;

    for(let i = 0; i < n; i++){
        arr[count + i] = nums[i];
        arr[count + i+1] = nums[n + i];
        count++;
    }

    return arr;
};