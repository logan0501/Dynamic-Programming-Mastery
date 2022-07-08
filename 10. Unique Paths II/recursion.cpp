#include<bits/stdc++.h>
using namespace std;
int helper(int i,int j,vector<vector<int>> &grid){
    
    if(i>=0 && j>=0 && grid[i][j]==1)return 0;
    if(i==0 && j==0)return 1;
    if(i<0 || j<0) return 0;

    int up = helper(i-1,j,grid);
    int left = helper(i,j-1,grid);
    return up+left;
}
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m=obstacleGrid.size()-1,n=obstacleGrid[0].size()-1;
    return helper(m,n,obstacleGrid);        
}
int main(){
    return 0;
}