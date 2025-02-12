class Stack
{
    vector<char> st;

public:
    void push(char ch)
    {
        st.push_back(ch);
    }

    char pop()
    {
        char ch = st.back();
        st.pop_back();
        return ch;
    }

    bool isEmpty()
    {
        return st.empty();
    }
};

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        Stack ss;
        string result;
        int i = 0;

        while (i < word.length() && word[i] != ch)
        {
            ss.push(word[i++]);
        }

        if (i == word.length())
            return word;

        result += word[i];
        while (!ss.isEmpty())
        {
            result += ss.pop();
        }

        i++;
        while (i < word.length())
        {
            result += word[i++];
        }

        return result;
    }
};
