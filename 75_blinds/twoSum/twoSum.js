/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let indices = [];

    for (let i = 0; i < nums.length; i++){
        for (let j = i+1; j < nums.length; j++){
            if (nums[i] + nums[j] === target) {
                indices = [i, j];
                break;
            }
        }
        if (indices.length === 2) {
            break;
        }
    }

    return indices;

};


const nums = [3, 2, 4];
const target = 6

console.log(twoSum(nums, target));
// Output: [1,2]