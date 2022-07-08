#include<bits/stdc++.h>
using namespace std;
int helper(int i,int j,vector<vector<int>> &triangle){
    if(i==triangle.size()-1)return triangle[i][j];
    return triangle[i][j] +min(helper(i+1,j,triangle),helper(i+1,j+1,triangle));
}
int minimumTotal(vector<vector<int>>& triangle) {
    int n=triangle.size();
    return helper(0,0,triangle);
}
int main(){

    return 0;
}