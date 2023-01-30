/*
169. Majority Element
Easy
13.5K
426
Companies
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109

 */
var majorityElement = function(nums) {
	// console.log(nums.length);
	let c=0;
	 for(let i=0;i<nums.length;i++){
		console.log(nums.length/2)
			 if(c>=nums.length/2||nums.length<=1){
					 console.log("c=",c,"number=",nums[i])
					 return nums[i-1];
			 }
			 console.log(c)
				c=0;
			 for(let j=0;j<nums.length;j++){
					 if(nums[i]==nums[j]){
							 c++;
					 }
			 }
				
					 
			 }
	 }
	 let k=majorityElement([3,2,3])
	 console.log(k)