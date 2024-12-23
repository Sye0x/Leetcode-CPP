class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
            else if (nums[i] < target)
            {
                k = i + 1;
            }
        }

        return k;
    }
};