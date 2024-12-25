class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {

        unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hashMap.find(nums[i]) != hashMap.end())
            {
                if (abs(i - hashMap[nums[i]]) <= k)
                {
                    return true;
                }
            }
            hashMap[nums[i]] = i;
        }
        return false;
    }
};