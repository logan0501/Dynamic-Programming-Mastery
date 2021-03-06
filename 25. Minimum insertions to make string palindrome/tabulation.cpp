#include <bits/stdc++.h>
using namespace std;

int lcs(string s, string t)
{
    int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int val = 0;
            if (dp[i][j] != -1)
                return dp[i][j];
            if (s[i - 1] == t[j - 1])
                val = 1 + dp[i - 1][j - 1];
            else
                val = max(dp[i - 1][j], dp[i][j - 1]);

            dp[i][j] = val;
        }
    }
    return dp[n][n];
}
int minInsertions(string s)
{
    string t = s;
    reverse(t.begin(), t.end());

    return s.size() - lcs(s, t);
}
int main()
{
    return 0;
}