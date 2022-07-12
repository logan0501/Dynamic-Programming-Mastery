#include <bits/stdc++.h>
using namespace std;
int minSubsetSumDifference(vector<int> &nums, int n)
{

    int totsum = accumulate(nums.begin(), nums.end(), 0);
    vector<vector<bool>> dp(n, vector<bool>(totsum + 1, 0));
    for (int i = 0; i < n; i++)
        dp[i][0] = true;
    if (nums[0] <= totsum)dp[0][nums[0]] = true;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= totsum; j++)
        {
            int nottaken = dp[i - 1][j];
            int taken = false;
            if (nums[i] <= j)
            {
                taken = dp[i - 1][j - nums[i]];
            }
            dp[i][j] = taken | nottaken;
        }
    }

    int minv = 1e9;
    for (int i = 0; i <= totsum; i++)
    {
        if (dp[n - 1][i] == 1)
        {
            int diff = abs(i - (totsum - i));
            minv = min(minv, diff);
        }
    }
    return minv;
}
int main()
{

    return 0;
}