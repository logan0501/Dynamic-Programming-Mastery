#include<bits/stdc++.h>
using namespace std;
int minCost(vector<int> &heights,int n){
    if(n<=0)return 0;
    return min(minCost(heights,n-1)+abs(heights[n-1]-heights[n]),
                minCost(heights,n-2)+abs(heights[n-2]-heights[n]));
}
int main(){
    vector<int> heights = {7 ,4, 4, 2, 6, 6, 3, 4 };
    cout<<minCost(heights,heights.size()-1);
    return 0;
}