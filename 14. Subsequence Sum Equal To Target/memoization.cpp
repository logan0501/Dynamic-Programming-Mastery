#include<bits/stdc++.h>
using namespace std;
bool f(int n,int k,vector<int> &arr,vector<vector<int>> &dp){    
    if(k==arr[n]) return true;
    if(n==0)return arr[0]==k;       
    if(dp[n][k]!=-1) return dp[n][k];
    int nottake = f(n-1,k,arr,dp);
    int take = false;
    if(arr[n]<k)take = f(n-1,k-arr[n],arr,dp);
    return dp[n][k] = nottake | take;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp(n,vector<int>(k+1,-1));
    return f(n-1,k,arr,dp);

}
int main(){

    return 0;
}