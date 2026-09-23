/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let hash = new Map();

    for( let i = 0; i < nums.length; i++ ){
        let diff = target - nums[i];

        if( hash.get(diff) !== undefined ){
            return [i, hash.get(diff) ]
        }

        hash.set(nums[i], i)
    }
};