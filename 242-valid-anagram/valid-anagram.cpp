class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        //         sort(t.begin(),t.end());
        //         if(s==t)return 1;
        //         return 0;
        int hlp[256];
        if(s.size()!=t.size())return 0;
        for(int i=0;i<s.size();i++){
            hlp[s[i]]++;
            hlp[t[i]]--;
        }
        for(int i=0;i<256;i++){
            if(hlp[i]!=0)return 0;
        }
        return 1;

    }
};