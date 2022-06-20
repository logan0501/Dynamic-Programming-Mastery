#include<bits/stdc++.h>
using namespace std;

int minCost(vector<int> &heights,int n,int k){
    if(n==0)return 0;
    vector<int> dp(n,0);
    for(int j=1;j<n;j++){
         int mincost=INT_MAX;
         for(int i=1;i<=k;i++){
            if(j-i>=0){
                int jumpenergy= dp[j-i] + abs(heights[j]-heights[j-i]);
                mincost = min(mincost,jumpenergy);              
            }
         }
         dp[j]=mincost;
    }
    return dp[n-1];
}
int main(){
    vector<int> heights = {30 ,10 ,60  , 10 , 60 , 50 };
    int k=2;
    cout<<minCost(heights,heights.size(),k);
    return 0;
}