#include<bits/stdc++.h>
using namespace std;
int minCost(vector<int> &heights,int n){
    vector<int> dp(n,0);
    if(n==0)return 0;
    for(int i=1;i<n;i++){
        int one = dp[i-1] + abs(heights[i-1]-heights[i]);
        int two = INT_MAX;
        if(i>1)two = dp[i-2]+abs(heights[i-2]-heights[i]);
        dp[i]=min(one,two);
    }
    return dp[n-1];
}
int main(){
    vector<int> heights = {7 ,4, 4, 2, 6, 6, 3, 4 };
    cout<<minCost(heights,heights.size());
    return 0;
}