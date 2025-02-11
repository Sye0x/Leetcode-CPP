class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hashMap.find(nums[i]) == hashMap.end())
            {
                hashMap[nums[i]] = i;
            }
        }
        int max = 0;
        int current = 1;
        int i = 1;
        for (auto entry : hashMap)
        {
            if (hashMap.find(entry.first - 1) == hashMap.end())
            {
                while (hashMap.find(entry.first + i) != hashMap.end())
                {
                    current++;
                    i++;
                }
                if (current > max)
                {
                    max = current;
                }
                current = 1;
                i = 1;
            }
        }
        return max;
    }
};