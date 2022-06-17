#include<bits/stdc++.h>
using namespace std;
int minCost(vector<int> &heights,int n){
    int prev=0,prev2=0;
    if(n==0)return 0;
    for(int i=1;i<n;i++){
        int one = prev + abs(heights[i-1]-heights[i]);
        int two = INT_MAX;
        if(i>1)two = prev2+abs(heights[i-2]-heights[i]);
        int c=min(one,two);
        prev2=prev;
        prev=c;
    }
    return prev;
}
int main(){
    vector<int> heights = {7 ,4, 4, 2, 6, 6, 3, 4 };
    cout<<minCost(heights,heights.size());
    return 0;
}