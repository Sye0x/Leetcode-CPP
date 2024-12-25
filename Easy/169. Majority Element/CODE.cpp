class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> hashMap;
        int major = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            if (hashMap.find(nums[i]) != hashMap.end())
            {
                if (++hashMap[nums[i]] > hashMap[major])
                {
                    major = nums[i];
                }
            }
            else
            {
                hashMap[nums[i]] = 1;
            }
        }
        return major;
    }
};