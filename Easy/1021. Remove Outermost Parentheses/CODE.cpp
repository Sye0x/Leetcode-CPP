class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string result;
        int depth = 0; // Track depth of parentheses

        for (char ch : s)
        {
            if (ch == '(')
            {
                if (depth > 0)
                    result += ch; // Only add if it's not the outermost '('
                depth++;
            }
            else
            {
                depth--;
                if (depth > 0)
                    result += ch; // Only add if it's not the outermost ')'
            }
        }

        return result;
    }
};
