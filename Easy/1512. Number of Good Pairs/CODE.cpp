class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        unordered_map<int, int> hashMap;
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hashMap.find(nums[i]) != hashMap.end())
            {
                result += hashMap[nums[i]];
                hashMap[nums[i]]++;
            }
            else
            {
                hashMap[nums[i]] = 1;
            }
        }
        return result;
    }
};