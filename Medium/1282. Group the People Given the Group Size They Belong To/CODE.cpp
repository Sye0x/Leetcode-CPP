class Solution
{
public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes)
    {
        unordered_map<int, vector<int>> groupMap;

        for (int i = 0; i < groupSizes.size(); i++)
        {
            groupMap[groupSizes[i]].push_back(i);
        }

        vector<vector<int>> result;

        for (auto entry : groupMap)
        {
            int j = 0;

            while (j < entry.second.size())
            {
                vector<int> temp;

                for (int x = 0; x < entry.first; x++)
                {
                    int index = entry.second[j];
                    temp.push_back(index);
                    j++;
                }

                result.push_back(temp);
            }
        }

        return result;
    }
};