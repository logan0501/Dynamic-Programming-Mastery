#include<bits/stdc++.h>
using namespace std;


bool helper(int n,int k,vector<int> &nums,vector<vector<int>> &dp){
    if(k==0)return true;
    if(n==0) return nums[0]==k;
    if(dp[n][k]!=-1)return dp[n][k];
    int nottaken =helper(n,k,nums,dp);
    int taken=false;
    if(nums[n]>=k){
       
        taken = helper(n-1,k-nums[n],nums,dp);
    }
    return dp[n][k]=taken|nottaken;
}
int minimumDifference(vector<int>& nums) {
    int n = nums.size();
    int totsum = accumulate(nums.begin(),nums.end(),0);
    vector<vector<int>> dp(n,vector<int>(totsum+1,-1));
    for(int i=0;i<=totsum;i++){
         helper(n-1,i,nums,dp);
    }
    int min = 1e9;
    for(int i=0;i<=totsum;i++){
        
    }
   
}
int main(){

    return 0;
}