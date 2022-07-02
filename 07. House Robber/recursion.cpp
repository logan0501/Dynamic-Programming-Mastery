#include<bits/stdc++.h>
using namespace std;
int houseRob(int i,vector<int> &nums,vector<int> &dp){
    if(dp[i]!=-1)return dp[i];
    if(i<0)return 0;
    if(i==0)return nums[0];
    return dp[i]=max(houseRob(i-1,nums,dp),nums[i]+houseRob(i-2,nums,dp));

}
int rob(vector<int>& nums) {
    vector<int> dp(nums.size(),-1);
    return houseRob(nums.size()-1,nums,dp);
}
int main(){

    return 0;
}