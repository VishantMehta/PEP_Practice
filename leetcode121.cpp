#include <bits/stdc++.h>
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        auto min = min_element(prices.begin(), prices.end());
        int st = *min;
        while (st == prices[prices.size() - 1])
        {
            if (prices.size() == 1)
            {
                return 0;
            }
            prices.pop_back();
            min = min_element(prices.begin(), prices.end());
            st = *min;
        }
        int max = INT_MIN;
        int flag = 0;
        if (prices.size() == 2)
        {
            max = prices[1];
        }
        else
        {
            for (int i = 0; i < prices.size(); i++)
            {
                if (prices[i] == st)
                {
                    flag = 1;
                }
                if (prices[i] != st && flag == 0)
                {
                    continue;
                }
                if (prices[i] > max)
                {
                    max = prices[i];
                }
            }
        }
        return max - st;
    }
};