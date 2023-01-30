/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 */
// let usr={'0':'hemlo'};
// for(let i=0;i<5;i++){
// 	if(usr[i]){
// 		usr[i]="hemlo found";

// 	}else{
// 		usr[i]="hemlo not found";
// 	}
// }
// console.log(usr);
var singleNumber = function(nums) {
	let object={};
	for(let i=0;i<nums.length;i++){
	    if(object[nums[i]]){
		object[nums[i]]="Repeated"
	    }else{
		object[nums[i]]="Not"
	    }
	}
	for(let k in object){
	    if(object[k]==='Not'){
		console.log(object)
	    return k;
	    }
	}  
    };
console.log(singleNumber([4,1,2,1,2]))