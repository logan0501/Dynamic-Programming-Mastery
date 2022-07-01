#include<bits/stdc++.h>
using namespace std;
int helper(vector<int> &cost,int i){
    if(i<0)return 0;
    if(i==0 || i==1)return cost[i];
    return cost[i]+min(helper(cost,i-1),helper(cost,i-2));
}
int minCostClimbingStairs(vector<int>& cost) {
    int n=cost.size();
    return min(helper(cost,n-1),helper(cost,n-2));
}
int main(){
    vector<int> costs = {10,15,20};
    cout<<minCostClimbingStairs(costs);
    return 0;
}