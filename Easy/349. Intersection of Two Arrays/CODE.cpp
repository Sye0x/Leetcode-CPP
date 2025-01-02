class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        unordered_map<int, int> hashMap;
        unordered_map<int, int> hashMap2;
        for (int i = 0; i < nums1.size(); i++)
        {
            if (hashMap.find(nums1[i]) == hashMap.end())
            {
                hashMap[nums1[i]] = 1;
            }
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (hashMap.find(nums2[i]) != hashMap.end() &&
                hashMap2.find(nums2[i]) == hashMap2.end())
            {
                result.push_back(nums2[i]);
                hashMap2[nums2[i]] = 1;
            }
        }
        return result;
    }
};