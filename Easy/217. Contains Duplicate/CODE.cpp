class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hashMap.find(nums[i]) != hashMap.end())
            {
                return true;
            }
            else
            {
                hashMap[nums[i]] = i;
            }
        }
        return false;
    }
};