#include<bits/stdc++.h>
using namespace std;
int f(int i,int prev,vector<int> &nums){
    if(i==nums.size())return 0;
    int nottake = f(i+1,prev,nums);
    int take=0;
    if(prev==-1 || nums[i]>nums[prev])take=1+f(i+1,i,nums);
    return max(nottake,take);
}
int lengthOfLIS(vector<int>& nums) {
    return f(0,-1,nums);
}
int main(){

    return 0;
}