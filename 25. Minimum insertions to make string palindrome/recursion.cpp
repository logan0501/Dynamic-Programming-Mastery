#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,string s,string t){
    if(i==0 || j==0)return 0;
    int val=0;
    if(s[i-1]==t[j-1])val= 1+f(i-1,j-1,s,t);
    else val = max(f(i-1,j,s,t),f(i,j-1,s,t));
    return val;
}
int lcs(string s,string t){
    int n=s.size();
    return f(n,n,s,t);
}
int minInsertions(string s) {
    string t = s;
    reverse(t.begin(),t.end());
    cout<<lcs(s,t)<<endl;
    return s.size()-lcs(s,t);
}
int main(){

    return 0;
}