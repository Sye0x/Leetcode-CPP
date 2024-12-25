class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> result(rowIndex + 1);
        result[0] = 1;
        long long val = 1;
        for (int i = 0; i < rowIndex; i++)
        {
            val *= rowIndex - i;
            val /= i + 1;
            result[i + 1] = val;
        }
        return result;
    }
};