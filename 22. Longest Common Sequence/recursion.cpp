#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,string s,string t){
    if(i==-1 || j==-1)return 0;
    int val=0;
    if(s[i]==t[j])val = 1 + f(i-1,j-1,s,t);
    else val = max(f(i-1,j,s,t),f(i,j-1,s,t));
    return val;
}
int lcs(string s, string t)
{
	return f(s.size()-1,t.size()-1,s,t);
}
int main(){

    return 0;
}