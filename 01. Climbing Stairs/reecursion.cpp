#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n) {
    if(n<=1)return 1;
    return climbStairs(n-1)+climbStairs(n-2);        
}
int main(){
    cout<<climbStairs(3)<<endl;
    cout<<climbStairs(45);
    return 0;
}