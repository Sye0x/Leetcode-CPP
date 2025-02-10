class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int prev = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = nums[i];
            nums[i] += prev;
            prev += temp;
        }
        return nums;
    }
};