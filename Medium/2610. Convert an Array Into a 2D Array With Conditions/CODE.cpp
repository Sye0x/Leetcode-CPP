class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        unordered_map<int, int> hashMap;
        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); i++)
        {
            int index = hashMap[nums[i]];

            if (index >= result.size())
            {
                result.push_back(vector<int>());
            }

            result[index].push_back(nums[i]);
            hashMap[nums[i]]++;
        }

        return result;
    }
};