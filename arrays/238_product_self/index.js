// 238. Product of Array Except Self
// Attempted
// Medium
// Topics
// premium lock iconCompanies
// Hint

// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]


/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    let stack = [];

    if(strs.length === 1){
        return strs[0];
    }

    for(let i = 0; i < strs.length; i ++){
        for(let j = 0; j < strs[i].length; j++){
            if( i === 0 ){
                if(strs[i][j] === strs[i+1][j]){
                    stack.push(strs[i][j]);
                }else {
                    break;
                }
            }else{
                if(strs[i][j] === strs[i+1][j]){
                    continue;
                }else{
                    break;
                }
            }
        }
        if(stack.length === 0) break;
    }

    return stack.join("");
};


let strs = ["flower", "flow", "flight"];
console.log(strs[3]); // what do you get?
console.log(strs[3][0]); // what happens now?