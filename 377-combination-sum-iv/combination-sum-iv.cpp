class Solution {
public:
    static const int MAX_TARGET = 1010; // Maximum possible target value
    int dp[MAX_TARGET]; // Array to store computed results

    int countCombinations(vector<int> nums, int remainingTarget) {
        // If the remaining target is 0, there's one valid combination.
        if (remainingTarget == 0)
            return 1;
        
         if (remainingTarget < 0)
            return 0;
        
         if (~dp[remainingTarget])
            return dp[remainingTarget];
        
        int currentCombinations = 0;
        
         for (int i = 0; i < nums.size(); i++) {
            int currentNum = nums[i];
            // recursively calculate combinations for the new target.
            currentCombinations += countCombinations(nums, remainingTarget - currentNum);
        }
        
         return dp[remainingTarget] = currentCombinations;
    }

    int combinationSum4(vector<int>& nums, int target) {
         for (int i = 0; i < MAX_TARGET; i++) {
            dp[i] = -1;
        }
        
         return countCombinations(nums, target);
    }
};