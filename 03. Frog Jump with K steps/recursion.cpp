#include<bits/stdc++.h>
using namespace std;
int minCost(vector<int> &heights,int n,int k){
    if(n==0)return 0;
    int mincost=INT_MAX;
    for(int i=1;i<=k;i++){  
        if(n-i>=0){
            int jumpenergy= minCost(heights,n-i,k) + abs(heights[n]-heights[n-i]);
            mincost = min(mincost,jumpenergy);
        }        
    }
    return mincost;
}
int main(){
    vector<int> heights = {30 ,10 ,60  , 10 , 60 , 50 };
    int k=2;
    cout<<minCost(heights,heights.size()-1,k);
    return 0;
}