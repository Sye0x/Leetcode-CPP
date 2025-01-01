class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int res = nums.size();
        res *= (res + 1);
        res /= 2;
        for (int i = 0; i < nums.size(); i++)
        {
            res -= nums[i];
        }
        return res;
    }
};