#include <bits/stdc++.h>
using namespace std;

bool helper(int n, int k, vector<int> &nums, vector<vector<int>> &dp)
{
    if (n == 0)
        return  (nums[0] == k);
    if (k == 0)
        return  true;
    if (dp[n][k] != -1)
        return dp[n][k];
    int nottaken = helper(n - 1, k, nums, dp);
    int taken = false;
    if (nums[n] <= k)
    {

        taken = helper(n - 1, k - nums[n], nums, dp);
    }
    return dp[n][k] = taken | nottaken;
}
int minSubsetSumDifference(vector<int> &nums, int n)
{

    int totsum = accumulate(nums.begin(), nums.end(), 0);
    vector<vector<int>> dp(n, vector<int>(totsum + 1, -1));

    for (int i = 0; i <= totsum; i++)
    {
        helper(n - 1, i, nums, dp);
    }
    //     for(auto a:dp){for(auto b:a)cout<<b<<" ";cout<<endl;}
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