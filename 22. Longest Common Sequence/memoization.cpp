#include<bits/stdc++.h>
using namespace std;
//shifting by 1 
int f(int i,int j,string s,string t,  vector<vector<int>> &dp){
    if(i==0 || j==0)return 0;
    if(dp[i-1][j-1]!=-1)return dp[i-1][j-1];
    int val=0;
    if(s[i-1]==t[j-1])val = 1 + f(i-1,j-1,s,t,dp);
    else val = max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
    return dp[i-1][j-1]=val;
}
int lcs(string s, string t)
{
    vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,-1));
	return f(s.size(),t.size(),s,t,dp);
}
int main(){

    return 0;
}