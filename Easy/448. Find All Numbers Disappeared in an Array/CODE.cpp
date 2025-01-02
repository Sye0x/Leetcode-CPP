class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> result;
        unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hashMap.find(nums[i]) == hashMap.end())
            {
                hashMap[nums[i]] = 1;
            }
        }
        for (int i = 1; i <= nums.size(); i++)
        {
            if (hashMap.find(i) == hashMap.end())
            {
                result.push_back(i);
            }
        }
        return result;
    }
};