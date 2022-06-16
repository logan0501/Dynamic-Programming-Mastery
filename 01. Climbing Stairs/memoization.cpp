#include<bits/stdc++.h>
using namespace std;
int helper(int n,vector<int> &dp){
    if(dp[n]!=-1)return dp[n];
    if(n<=1)return dp[n]=1;
    return dp[n]=helper(n-1,dp)+helper(n-2,dp);   
}
int climbStairs(int n) {
      vector<int> dp(n+1,-1);
      return helper(n,dp);
}
int main(){
    int n;
    cin>>n;
   
    cout<<climbStairs(n);
    return 0;
}