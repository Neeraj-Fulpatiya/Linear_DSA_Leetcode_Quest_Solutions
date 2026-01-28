class Solution {
public:
    int strStr(string haystack, string needle) {
     int idx=haystack.find(needle);
     if(idx==-1)return -1;
     return idx;
    }
};