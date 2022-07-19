#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,string s,string t,vector<vector<int>> &dp){
    if(i==0 || j==0)return 0;
    int val=0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i-1]==t[j-1])val= 1+f(i-1,j-1,s,t,dp);
    else val = max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));

    return dp[i][j] = val;
}
int lcs(string s,string t){
    int n=s.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    return f(n,n,s,t,dp);
}
int minInsertions(string s) {
    string t = s;
    reverse(t.begin(),t.end());
   
    return s.size()-lcs(s,t);
}
int main(){
    return 0;
}