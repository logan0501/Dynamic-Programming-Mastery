#include<bits/stdc++.h>
using namespace std;
int f(int n,int k,vector<int> &arr){
    if(n==0){
        if(k==0 && arr[0]==0)return 2;
        if(k==0 || arr[0]==k)return 1;
        return 0;
    }
    
    int notpick =f(n-1,k,arr);
    int pick = 0;
    if(k>=arr[n])pick = f(n-1,k-arr[n],arr);
    return pick+notpick; 
}
int countPartitions(int n, int d, vector<int> &arr) {
    int sum = accumulate(arr.begin(),arr.end(),0);
    int tar = (d+sum)/2;
   
    if(sum-d<0) return 0;
       
    if((sum-d)%2==1) return 0;

    return f(n-1,tar,arr);
}


int main(){

    return 0;
}