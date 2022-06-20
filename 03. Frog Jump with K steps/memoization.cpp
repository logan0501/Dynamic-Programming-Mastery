#include<bits/stdc++.h>
using namespace std;
int helper(int n,int k,vector<int> &dp,vector<int> &heights){
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    int mincost=INT_MAX;
    for(int i=1;i<=k;i++){  
        if(n-i>=0){
            int jumpenergy= helper(n-i,k,dp,heights) + abs(heights[n]-heights[n-i]);
            mincost = min(mincost,jumpenergy);
        }        
    }
    return dp[n]=mincost;
}
int minCost(vector<int> &heights,int n,int k){
    vector<int> dp(n,-1);
    return helper(n-1,k,dp,heights);
}
int main(){
    vector<int> heights = {30 ,10 ,60  , 10 , 60 , 50 };
    int k=2;
    cout<<minCost(heights,heights.size(),k);
    return 0;
}