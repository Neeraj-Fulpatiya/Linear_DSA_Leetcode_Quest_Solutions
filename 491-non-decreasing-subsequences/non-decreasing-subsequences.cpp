class Solution {
public:
    map<vector<int>, bool> uniquemap;

    bool isUnique(vector<int>& output){
        if(uniquemap[output] == true){
            return false;
        }
        return true;
    }


    bool isSorted(vector<int>& output){
        int n = output.size();
        for(int j=1; j<n; j++){
            if(output[j] < output[j-1]){
                return false;
            }
        }
        return true;
    }


    void solve(vector<int>& nums, int i, vector<vector<int>>& ans, vector<int>& output){
        //base case
        if(i >= nums.size()){
            if(isSorted(output) && isUnique(output) && output.size() >= 2){
                ans.push_back(output);
                uniquemap[output] = true;
            }
            return;
        }

          
        output.push_back(nums[i]);
        solve(nums, i+1, ans, output);
        output.pop_back();

         
        solve(nums, i+1, ans, output);
    }


    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> ans;
        int i = 0;
        solve(nums, i, ans, output);
        return ans;
    }
};