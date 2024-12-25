class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min = prices[0];
        int res = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (res < prices[i] - min)
            {
                res = prices[i] - min;
            }
            if (min > prices[i])
            {
                min = prices[i];
            }
        }
        return res;
    }
};