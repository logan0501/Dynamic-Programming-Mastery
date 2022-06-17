#include<bits/stdc++.h>
using namespace std;
int helper(vector<int> &heights,vector<int> dp,int n){
    if(dp[n]!=-1)return dp[n];
    if(n==0)return dp[n]==0;
    int one = helper(heights,dp,n-1) + abs(heights[n-1]-heights[n]);
    int two =INT_MAX;
    if(n>1){
        two =  helper(heights,dp,n-2) + abs(heights[n-2]-heights[n]);
    }
    return dp [n]=min(one,two);
}
int minCost(vector<int> &heights,int n){
    vector<int> dp(n+1,-1);
    return helper(heights,dp,heights.size()-1);
}
int main(){
    vector<int> heights = {7 ,4, 4, 2, 6, 6, 3, 4 };
    cout<<minCost(heights,heights.size()-1);
    return 0;
}