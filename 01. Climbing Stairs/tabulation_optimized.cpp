#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n) {
    if(n<=1)return 1;
    int a,b,c;
    a=b=1;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;        
}
int main(){
    cout<<climbStairs(3)<<endl;
    cout<<climbStairs(45);
    return 0;
}