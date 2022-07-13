#include<bits/stdc++.h>
using namespace std;
int f(int i,int amount,vector<int> &coins){
 
    if(i==0){
        if(amount%coins[i]==0)return amount/coins[i];
        else return 1e9;
    }
    
    int notpick = f(i-1,amount,coins);
    int pick = 1e9;
    if(amount>=coins[i])pick = 1+f(i,amount-coins[i],coins);
    return min(notpick,pick);
}
int coinChange(vector<int>& coins, int amount) {
    int n = coins.size();
    int res= f(n-1,amount,coins);
    return res>=1e9?-1:res;
}

int main(){

    return 0;
}
