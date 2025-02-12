class Solution
{
public:
    int maxDepth(string s)
    {
        int depth = 0; // Track current depth
        int maxv = 0;  // Track maximum depth

        for (char ch : s)
        {
            if (ch == '(')
            {
                depth++;
                maxv = max(depth, maxv); // Update max depth
            }
            else if (ch == ')')
            { // Fixed syntax error
                depth--;
            }
        }

        return maxv;
    }
};
