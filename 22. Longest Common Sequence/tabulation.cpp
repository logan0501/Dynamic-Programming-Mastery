#include <bits/stdc++.h>
using namespace std;
int lcs(string s, string t)
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
    return dp[s.size()][t.size()];
}
int main()
{

    return 0;
}