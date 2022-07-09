#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>>& matrix){
    if(j<0 || j>=matrix[0].size())return INT_MAX;
    if(i==0)return matrix[i][j];   
    return matrix[i][j]+min(f(i-1,j-1,matrix),min(f(i-1,j,matrix),f(i-1,j+1,matrix)));
}
int minFallingPathSum(vector<vector<int>>& matrix) {
    int minv=INT_MAX;
    for(int i=0;i<matrix[0].size();i++){
       
        minv=min(minv,f(matrix.size()-1,i,matrix));
    }
    return minv;
}

int main(){

    return 0;
}