#include<bits/stdc++.h>
using namespace std;
int helper(vector<int> &nums,int i,vector<int> &dp){
    if(dp[i]!=-1)return dp[i];
    if(i==0)return dp[i]=nums[0];
    if(i<0)return 0;
    return dp[i]=max(helper(nums,i-1,dp),helper(nums,i-2,dp)+nums[i]);
}
int maximumNonAdjacentSum(vector<int> &nums){
    vector<int> dp(nums.size(),-1);
   return helper(nums,nums.size()-1,dp);
}
int main(){
    return 0;
}