class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        unordered_map<int, int> hashMap;
        for (int i = 0; i < nums1.size(); i++)
        {
            if (hashMap.find(nums1[i]) == hashMap.end())
            {
                hashMap[nums1[i]] = 1;
            }
            else
            {
                hashMap[nums1[i]]++;
            }
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (hashMap.find(nums2[i]) != hashMap.end() && hashMap[nums2[i]]-- > 0)
            {
                result.push_back(nums2[i]);
            }
        }
        return result;
    }
};