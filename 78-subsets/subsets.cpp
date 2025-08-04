class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int sub = 1<<nums.size();
        vector<vector<int>>ans;
        for(int n=0; n<sub; n++){
            vector<int>lst;
            for(int i=0; i<nums.size(); i++){
                if(n & (1<<i))lst.push_back(nums[i]);
            }
            ans.push_back(lst);
        }
        return ans;
    }
};