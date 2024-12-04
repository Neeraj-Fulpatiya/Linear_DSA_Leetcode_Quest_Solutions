class Solution {
public:
    pair<int, int> helper(const string& s) {
        int count0 = 0, count1 = 0;
        for (char c : s) {
            if (c == '0') count0++;
            else if (c == '1') count1++;
        }
        return {count0, count1};
    }

    int solve(int i, int m, int n, vector<string>& strs, vector<vector<vector<int>>>& dp) {
         if (i < 0) return 0;

        // Check memoized result
        if (dp[i][m][n] != -1) return dp[i][m][n];

        pair<int, int> counts = helper(strs[i]);
        int c0 = counts.first;   
        int c1 = counts.second;  

         int notTake = solve(i - 1, m, n, strs, dp);

         int take = 0;
        if (m >= c0 && n >= c1) {
            take = 1 + solve(i - 1, m - c0, n - c1, strs, dp);
        }

         return dp[i][m][n] = max(take, notTake);
    }

    int findMaxForm(vector<string>& strs, int m, int n) {
        int len = strs.size();
        vector<vector<vector<int>>> dp(len, vector<vector<int>>(m + 1, vector<int>(n + 1, -1)));
        return solve(len - 1, m, n, strs, dp);
    }
};