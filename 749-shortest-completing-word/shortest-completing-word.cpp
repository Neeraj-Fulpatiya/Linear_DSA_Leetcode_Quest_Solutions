class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        stable_sort(words.begin(), words.end(), [] (const string& lhs, const string& rhs) {
            return lhs.size() < rhs.size();
        });
        array<int, 26> dict{};
        for (const char c: licensePlate)
        {
            if (isalpha(c))
            {
                if (isupper(c))
                    ++ dict[c - 'A'];
                else
                    ++ dict[c - 'a'];
            }
        }
        for (const string& word: words)
        {
            if (isCompleting(dict, word))
                return word;
        }
        return "";
    }
    bool isCompleting(const array<int, 26>& dict, const string& word)
    {
        array<int, 26> w{};
        for (const char c: word)
            ++ w[c - 'a'];
        for (int i = 0; i < 26; ++ i)
        {
            if (dict[i] > w[i])
                return false;
        }
        return true;
    }
};