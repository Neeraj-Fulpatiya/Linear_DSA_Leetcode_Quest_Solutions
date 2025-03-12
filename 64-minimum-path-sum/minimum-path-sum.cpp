class Solution {
public:
    int find(vector<vector<int>>& grid, int m, int n,vector<vector<int>>&dp) {
        if (m < 0 || n < 0) return INT_MAX; // Prevent out-of-bounds access
        if (m == 0 && n == 0) return grid[m][n]; // Base case
if(dp[m][n]!=-1)return dp[m][n];
        int up = find(grid, m - 1, n,dp);
        int left = find(grid, m, n - 1,dp);

        return dp[m][n]=grid[m][n] + min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return find(grid, m - 1, n - 1,dp);
        return dp[m-1][n-1];
    }
};
