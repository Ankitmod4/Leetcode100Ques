// length of the last word
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;
        int countspace = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            int length = 0;
            bool found = false;
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] != ' ')
                {
                    found = true;
                    length++;
                }
                else if (found)
                {
                    break;
                }
            }
            return length;
        }

        return count;
    }
};