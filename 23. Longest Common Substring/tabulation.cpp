#include<bits/stdc++.h>
using namespace std;

int lcs(string s, string t) {
	int n=s.size(),m=t.size();
    vector<vector<int>> dp(n,vector<int>(m,0));
    int maxv=INT_MIN;
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(s[i]==s[j]){
                dp[i][j]=1+dp[i-1][j-1];
                 maxv=max(dp[i][j],maxv);
            }else{
                dp[i][j]=0;
            }
        }
    }
    return maxv;
}

int main(){
    return 0;
}