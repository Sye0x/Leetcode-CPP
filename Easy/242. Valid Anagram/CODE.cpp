class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
        {
            return false;
        }

        // Create a frequency array for characters 'a' to 'z'
        int freq[26] = {0};
        // Increment frequency for characters in `s` and decrement for characters in `t`
        for (int i = 0; i < s.length(); ++i)
        {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        // Check if all frequencies are zero
        for (int i = 0; i < 26; ++i)
        {
            if (freq[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};