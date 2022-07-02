#include<bits/stdc++.h>
using namespace std;
int houseRob(int i,vector<int> &nums){
    if(i<0)return 0;
    if(i==0)return nums[0];
    return max(nums[i]+houseRob(i-2,nums),houseRob(i-1,nums));
}
int rob(vector<int>& nums) {
    if(nums.size()==1)return nums[0];
    vector<int> v1(nums.begin(),nums.end()-1);
    vector<int> v2(nums.begin()+1,nums.end());
    return max(houseRob(v1.size(),v1),houseRob(v2.size(),v2));
}
int main(){
    return 0;
}