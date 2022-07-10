#include<bits/stdc++.h>
using namespace std;

bool f(int n,int k,vector<int> &arr){
    if(k==arr[n])return true;
    if(n==0)return arr[0]==k;   
    int nottake = f(n-1,k,arr);
    int take = false;
    if(arr[n]<k)take = f(n-1,k-arr[n],arr);
    return nottake | take;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    return f(n-1,k,arr);
}
int main(){

    return 0;
}