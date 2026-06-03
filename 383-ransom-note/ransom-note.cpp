class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26, 0);

        for(char ch : magazine) {
            v[ch - 'a']++;
        }

        for(char ch : ransomNote) {
            v[ch - 'a']--;
        }

        for(int val : v) {
            if(val < 0) {
                return false;
            }
        }

        return true;
    }
};