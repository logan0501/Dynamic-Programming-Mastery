#include<bits/stdc++.h>
using namespace std;
int f(int n,int k,vector<int> &nums,vector<vector<int>> &dp){
    if(k==0)return 1;
    if(n==0)return nums[0]==k;
    if(dp[n][k]!=-1)return dp[n][k];
    int notpick = f(n-1,k,nums,dp);
    int pick =0;
    if(nums[n]<=k)pick = f(n-1,k-nums[n],nums,dp);
    return dp[n][k]=notpick+pick;
}
int findWays(vector<int> &num, int tar)
{
    int n=num.size();
    vector<vector<int>> dp(n,vector<int>(tar+1,-1));
    return f(num.size()-1,tar,num,dp);
}
int main(){

    return 0;
}