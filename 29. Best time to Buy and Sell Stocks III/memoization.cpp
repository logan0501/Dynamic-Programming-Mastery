#include<bits/stdc++.h>
using namespace std;
int f(int i,int buy,int cap,vector<int> &prices, vector<vector<vector<int>>> &dp){

    if(cap==0 || i==prices.size())return 0;
    if(dp[i][buy][cap]!=-1)return dp[i][buy][cap];
    int maxv=0;
    if(buy==0){
        maxv=max(-prices[i]+f(i+1,1,cap,prices,dp),f(i+1,0,cap,prices,dp));
    }else{
        maxv=max(prices[i]+f(i+1,0,cap-1,prices,dp),f(i+1,1,cap,prices,dp));
    }
    return dp[i][buy][cap] = maxv;
}
int maxProfit(vector<int>& prices) {
    int n = prices.size();
    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
    return f(0,0,2,prices,dp); 
}
int main(){

    return 0;
}