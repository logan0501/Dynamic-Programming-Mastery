#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int mine=prices[0];
    int res=INT_MIN;
    for(int i=1;i<prices.size();i++){
        res=max(prices[i]-mine,res);
        mine=min(mine,prices[i]);
    }
    return res;
}
int main()
{
    return 0;
}