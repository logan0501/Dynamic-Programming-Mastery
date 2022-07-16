#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,string s,string t,  vector<vector<int>> &dp){
    if(i==-1 || j==-1)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int val=0;
    if(s[i]==t[j])val = 1 + f(i-1,j-1,s,t,dp);
    else val = max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
    return dp[i][j]=val;
}
int lcs(string s, string t)
{
    vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,-1));
	return f(s.size()-1,t.size()-1,s,t,dp);
}
int main(){

    return 0;
}