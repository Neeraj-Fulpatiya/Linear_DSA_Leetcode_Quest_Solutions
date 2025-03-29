class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char, int> firstOcc;
        for(int i = 0; i<s.length(); i++){
            if(firstOcc.find(s[i]) != firstOcc.end()){
                if(distance[s[i]-'a'] != (i - firstOcc[s[i]] - 1)){
                    return false;
                }
            }
            else firstOcc[s[i]] = i;
        }
        return true;
    }
};