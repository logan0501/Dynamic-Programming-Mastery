#include<bits/stdc++.h>
using namespace std;
int f(int i,int wt,vector<int> &weight,vector<int> &val){
    if(i==0){
        if(weight[i]<=wt)return val[i];
        else return 0;
    }
    int notpick = f(i-1,wt,weight,val);
    int pick =INT_MIN;
    if(weight[i]<=wt)pick = val[i]+f(i-1,wt-weight[i],weight,val);
    return max(notpick,pick);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return f(n-1,maxWeight,weight,value);
}
int main(){

    return 0;
}