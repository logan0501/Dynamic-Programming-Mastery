#include<bits/stdc++.h>
using namespace std;
int mod = (int)1e9+7;

int countPartitions(int n, int d, vector<int> &arr) {
    // int sum = accumulate(arr.begin(),arr.end(),0);
    // if(sum-d<0 || (sum-d)%2==1) return 0;
    // int tar = (d+sum)/2;
    // vector<vector<int>> dp(n,vector<int>(tar+1,-1));
    // for(int i=0;i<n;i++)dp[i][0]=1;
    // if(arr[0]==0)dp[0][0]=2;
    // else dp[0][0]=1;
    // if(arr[0] && arr[0]<=tar)dp[0][arr[0]]=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<=tar;j++){
    //     int notpick =dp[i-1][j];
    //     int pick = 0;
    //     if(j>=arr[i])pick = dp[i-1][j-arr[i]];
    //     dp[i][j]=(pick+notpick)%mod;          
    //     }
    // }
    // return dp[n][tar];
}


int main(){

    return 0;
}