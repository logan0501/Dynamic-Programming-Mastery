#include<bits/stdc++.h>
using namespace std;

//Try filling the dp table to understand How to space optimize.

int minimumTotal(vector<vector<int>>& triangle) {
    int n=triangle.size();
    for(int i = n-2;i>=0;i--){
        for(int j=i;j>=0;j--){
            triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
        }
    }
    return triangle[0][0];
}
int main(){

    return 0;
}