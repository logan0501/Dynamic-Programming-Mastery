#include<bits/stdc++.h>
using namespace std;
int maxv=INT_MIN;
void f(int i,int j,string &s,string &t,int score){
    if(s[i]==s[j]){
        score++;
        f(i-1,j-1,s,t,score);
    }else{
        maxv=max(maxv,score);
        score=0;
        f(i-1,j,s,t,score);
        f(i,j-1,s,t,score);
    }
}
int lcs(string &s, string &t){
	int m=s.size(),n=t.size();
    f(m-1,n-1,s,t,0);
    return maxv;
}
int main(){

    return 0;
}