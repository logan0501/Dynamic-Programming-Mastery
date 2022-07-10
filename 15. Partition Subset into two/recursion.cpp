#include<bits/stdc++.h>
using namespace std;
int helper(int n,int target,vector<int> &nums){
    if(nums[n]==target)return true;
    if(n==0)return nums[0]==target;
    int nottaken = helper(n-1,target,nums);
    int taken = false;
    if(nums[n]<target)taken = helper(n-1,target-nums[n],nums);
    return nottaken | taken;
}
bool canPartition(vector<int>& nums) {
     int n=nums.size();
     int sum=accumulate(nums.begin(),nums.end(),0);
     if(sum%2)return false;
     return helper(n-1,sum/2,nums);   
}
int main(){

    return 0;
}