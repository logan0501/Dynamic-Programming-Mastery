#include<bits/stdc++.h>
using namespace std;

int f(int i,int wt,vector<int> &weight,vector<int> &val,vector<vector<int>> &dp){
    if(i==0){
        if(weight[i]<=wt)return val[i];
        else return 0;
    }
    if(dp[i][wt]!=-1)return dp[i][wt];
    int notpick = f(i-1,wt,weight,val,dp);
    int pick =INT_MIN;
    if(weight[i]<=wt)pick = val[i]+f(i-1,wt-weight[i],weight,val,dp);
    return dp[i][wt]=max(notpick,pick);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    vector<vector<int>> dp(n,vector<int>(maxWeight+1,-1));
    return f(n-1,maxWeight,weight,value,dp);
}

int main(){

    return 0;
}