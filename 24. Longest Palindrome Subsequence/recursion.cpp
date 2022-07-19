#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,string s,string t){
    if(i==0 || j==0)return 0;
    if(s[i-1]==t[j-1]){
        return 1+f(i-1,j-1,s,t);
    }
    return max(f(i-1,j,s,t),f(i,j-1,s,t));
}
int lcs(string s,string t){
    return f(s.size(),t.size(),s,t);
}
int longestPalindromeSubseq(string s) {
    string temp = s;
    reverse(temp.begin(),temp.end());
    return lcs(s,temp);
}
int main(){
    return 0;
}