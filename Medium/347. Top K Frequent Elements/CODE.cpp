class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> frequencyMap;

        // Count frequencies
        for (int num : nums)
        {
            frequencyMap[num]++;
        }

        // Bucket sort: index represents frequency
        vector<vector<int>> buckets(nums.size() + 1);

        for (const auto &entry : frequencyMap)
        {
            buckets[entry.second].push_back(entry.first);
        }

        // Collect top k frequent elements
        vector<int> result;

        for (int i = buckets.size() - 1; i > 0 && result.size() < k; i--)
        {
            for (int num : buckets[i])
            {
                result.push_back(num);
                if (result.size() == k)
                    break;
            }
        }

        return result;
    }
};