#include<bits/stdc++.h>
using namespace std;

int findWays(vector<int> &num, int tar)
{
    int n=num.size();
    vector<vector<int>> dp(n,vector<int>(tar+1,0));
    for(int i=0;i<n;i++){
        dp[i][0]=1;
    }
    if(num[0]<=tar)dp[0][num[0]]=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=tar;j++){
            int notpick = dp[i-1][j];
            int pick =0;
            if(num[i]<=j)pick = dp[i-1][j-num[i]];
            dp[i][j]= notpick+pick;
        }
    }
    return dp[n-1][tar];
}

int main(){

    return 0;
}