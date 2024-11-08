class Solution {
public:
    vector<int> findAnagrams(string s, string p)
     {
        vector<int> res;
        vector<int> m(128, 0);
        for (char c : p) m[c]++;
        int left = 0, right = 0, cnt = p.size();
        while (right < s.size())
         {
            if (m[s[right++]]-- >= 1) cnt--;
            if (cnt == 0) res.push_back(left);
            if (right - left == p.size() && m[s[left++]]++ >= 0) cnt++;
        }
        return res;
    }
};

