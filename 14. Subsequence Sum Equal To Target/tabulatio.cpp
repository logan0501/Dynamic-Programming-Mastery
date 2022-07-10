#include<bits/stdc++.h>
using namespace std;
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>> dp(n,vector<bool>(k+1,false));
    if(k>=arr[0])dp[0][arr[0]]=true;
    for(int i=0;i<n;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=k;j++){
            bool nottake = dp[i-1][j];
            bool take = false;
            if(arr[i]<=j)take = dp[i-1][j-arr[i]];
            dp[i][j] = nottake | take;
 
        }

    }

    return dp[n-1][k];

}
int main(){
    int n=4,k=5;
    vector<int> v ={4, 3, 2, 1};
    cout<<boolalpha<<subsetSumToK(n,k,v);
    return 0;
}