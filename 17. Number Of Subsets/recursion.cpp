#include<bits/stdc++.h>
using namespace std;
int f(int n,int k,vector<int> &nums){
    if(k==0)return 1;
    if(n==0)return nums[0]==k;
    int notpick = f(n-1,k,nums);
    int pick =0;
    if(nums[n]<=k)pick = f(n-1,k-nums[n],nums);
    return notpick+pick;
}
int findWays(vector<int> &num, int tar)
{
    return f(num.size()-1,tar,num);
}
int main(){

    return 0;
}