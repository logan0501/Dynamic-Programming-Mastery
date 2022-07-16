#include <bits/stdc++.h>
using namespace std;
string lcs(string s, string t)
{
    vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, 0));

    for (int i = 1; i <= s.size(); i++)
    {
        for (int j = 1; j <= t.size(); j++)
        {
            int val = 0;
            if (s[i - 1] == t[j - 1])
                val = 1 + dp[i - 1][j - 1];
            else
                val = max(dp[i - 1][j], dp[i][j - 1]);
            dp[i][j] = val;
        }
    }
    string s="";
    int i=s.size(),j=t.size();
    while (i && j){
        if(s[i-1] == t[j-1]){
            s+=s[i-1];
            i--;
            j--;
        }else if(dp[i-1][j]>dp[i][j-1])i--;
        else j--;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{

    return 0;
}