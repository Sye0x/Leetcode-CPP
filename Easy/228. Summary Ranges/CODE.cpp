class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> res;
        if (nums.empty())
            return res; // Handle the empty input case

        int a = nums[0]; // Start of the current range
        int b = a;       // End of the current range

        for (int i = 1; i < nums.size(); i++)
        {
            if (b + 1 == nums[i])
            {
                b = nums[i]; // Extend the range
            }
            else
            {
                // Add the range to the result
                if (a == b)
                {
                    res.push_back(to_string(a));
                }
                else
                {
                    res.push_back(to_string(a) + "->" + to_string(b));
                }
                // Start a new range
                a = nums[i];
                b = a;
            }
        }

        // Add the last range
        if (a == b)
        {
            res.push_back(to_string(a));
        }
        else
        {
            res.push_back(to_string(a) + "->" + to_string(b));
        }

        return res;
    }
};
