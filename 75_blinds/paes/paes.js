// 238. Product of Array Except Self
// Medium
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

// Example 1:
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Example 2:
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

// Constraints:
// 2 <= nums.length <= 105
// -30 <= nums[i] <= 30
// The input is generated such that answer[i] is guaranteed to fit in a 32-bit integer.

// Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)


// Works but, we strictly need a time complexity of O(n). currently it's atleast of O(n^2)
function productExceptSelf( arr ){
    const temp = [];
    arr.forEach( ( item , index ) =>{
        temp[index] = 1;
    } )

    for( let i = 0 ; i < arr.length; i++ ){
        for( let j = 0 ; j < arr.length ; j++ ){
            if( i === j ){
                continue;
            }else{
                temp[i] *= arr[j];
            }
        }
    }
    return temp;
}

function productExceptSelf2( nums ){

    let count = 0;
    for( let i = 0 ; i < nums.length ; i++ ){
        
    }

}


const array = [ 1 , 2 , 3 , 4 ];
console.log( productExceptSelf(array) );