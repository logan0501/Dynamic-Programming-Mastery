#include<bits/stdc++.h>
using namespace std;
int f(int i,int buy,vector<int> &prices){
    if(i>=prices.size())return 0;
    int maxv=0;
    if(buy==0){
        maxv=max(-prices[i]+f(i+1,1,prices),f(i+1,0,prices));
    }else{
        maxv = max(prices[i]+f(i+2,0,prices),f(i+1,1,prices));
    }
    return maxv;
}
int maxProfit(vector<int>& prices) {
    int n=prices.size();
    return f(0,0,prices);
}
int main(){

    return 0;
}