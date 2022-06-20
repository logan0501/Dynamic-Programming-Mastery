#include <bits/stdc++.h>
using namespace std;

int maximumNonAdjacentSum(vector<int> &nums)
{
    vector<int> dp(nums.size(), 0);
    int n = nums.size();
    dp[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        int pick = nums[i];
        if (i > 1)
            pick += dp[i - 2];
        int notpick = dp[i - 1];
        dp[i] = max(pick, notpick);
    }

    return dp[n - 1];
}
int main()
{
    return 0;
}