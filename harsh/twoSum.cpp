#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    // hashmap = (5,4,3,2)
    //o(n) = 
    unordered_map<int,int> map;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        int remSum = target-nums[i];
        if(map.count(nums[i])>0){
            int index = map[remSum];
            int index2 = i;
            return {index,index2};
        }else{
            map[remSum]= i;
        }
    }
    
    return {};
}
int main(){
    vector<int> v = {1,2,3,4};
    int target = 6;
    vector<int> ans = twoSum(v,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}