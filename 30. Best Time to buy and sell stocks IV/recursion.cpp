#include<bits/stdc++.h>
using namespace std;
int f(int i,int buy,int cap,vector<int> &prices){
    if(i==prices.size() || cap==0)return 0;
    int maxv=0;
    if(buy==0){
        maxv=max(-prices[i]+f(i+1,1,cap,prices),f(i+1,0,cap,prices));
    }else{
        maxv=max(prices[i]+f(i+1,0,cap-1,prices),f(i+1,1,cap,prices));
    }
    return maxv;
}
int maxProfit(int k, vector<int>& prices) {
     return f(0,0,k,prices);
}
int main(){

    return 0;
}