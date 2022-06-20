#include<bits/stdc++.h>
using namespace std;
int helper(vector<int> &nums,int i){
    if(i==0)return nums[0];
    if(i==1)return nums[1];
    return max(helper(nums,i-1),helper(nums,i-2)+nums[i]);
}
int maximumNonAdjacentSum(vector<int> &nums){
   return helper(nums,nums.size()-1);
}
int main(){
    vector<int> nums={1 ,2, 4};
    cout<<maximumNonAdjacentSum(nums);
    return 0;
}