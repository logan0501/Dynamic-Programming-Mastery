#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,string s,string t, vector<vector<int>> &dp){
    if(i==0 || j==0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i-1]==t[j-1]){
        return 1+f(i-1,j-1,s,t,dp);
    }
    return dp[i][j]= max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
}
int lcs(string s,string t){
    int n=s.size(),m=t.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    return f(n,m,s,t,dp);
}
int longestPalindromeSubseq(string s) {
    string temp = s;
    reverse(temp.begin(),temp.end());
    return lcs(s,temp);
}
int main(){
    return 0;
}