class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> ans(2 * nums.size());
        int j = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = nums[i];
            ans[j++] = nums[i];
        }
        return ans;
    }
};