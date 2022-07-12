#include<bits/stdc++.h>
using namespace std;
int mod = (int)1e9+7;
int f(int n,int k,vector<int> &arr,vector<vector<int>> &dp){

    if(n==0){
        if(k==0 && arr[0]==0)return 2;
        if(k==0 || arr[0]==k)return 1;
        return 0;
    }
    if(dp[n][k]!=-1)return dp[n][k];
    int notpick =f(n-1,k,arr,dp);
    int pick = 0;
    if(k>=arr[n])pick = f(n-1,k-arr[n],arr,dp);
    return dp[n][k]=(pick+notpick)%mod; 
}
int countPartitions(int n, int d, vector<int> &arr) {
    int sum = accumulate(arr.begin(),arr.end(),0);
    int tar = (d+sum)/2;
   
    if(sum-d<0) return 0;
       
    if((sum-d)%2==1) return 0;
    vector<vector<int>> dp(n,vector<int>(tar+1,-1));
    return f(n-1,tar,arr,dp);
}


int main(){

    return 0;
}