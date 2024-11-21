class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> cost(s.size());
        for (int i = 0; i < s.size(); i++) {
            cost[i] = abs(s[i] - t[i]);
        }
        
        int max_len = 0; 
        int calc_cost = 0; 
        int left = 0; 
        
        for (int right = 0; right < s.size(); right++) {
            calc_cost += cost[right];
            while (calc_cost > maxCost) {
                calc_cost -= cost[left];
                left++;
            }
            
            max_len = max(max_len, right - left + 1);
        }
        
        return max_len;
    }
};
