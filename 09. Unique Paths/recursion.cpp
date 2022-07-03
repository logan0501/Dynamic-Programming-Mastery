#include <bits/stdc++.h>
using namespace std;
int helper(int i, int j)
{
    if (i == 0 and j == 0)
        return 1;
    if (i < 0 or j < 0)
        return 0;
    return helper(i - 1, j) + helper(i, j - 1);
}
int uniquePaths(int m, int n)
{
    return helper(m - 1, n - 1);
}
int main()
{

    return 0;
}