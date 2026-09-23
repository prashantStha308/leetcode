/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findErrorNums = function(nums) {
	const n = nums.length;
	const expectedSum = (n*(n+1))/2 //sum of first natural numbers
	
	const set = new Set(nums);
	let uniqueSum = 0;
	let arraySum = 0;
	
	for(let i = 0; i < n; i++){
		arraySum += nums[i];
	}

	for (const value of set) {
  		uniqueSum += value;
	}

	return [ arraySum - uniqueSum, expectedSum - uniqueSum];

};