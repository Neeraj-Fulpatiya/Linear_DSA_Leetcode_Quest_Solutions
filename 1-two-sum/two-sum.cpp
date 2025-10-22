class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i;

        }
        for(int i=0;i<nums.size();i++){
            int look=target-nums[i];

            if(mpp[look]){
                if(mpp[look]!=i){
                    return {i,mpp[look]};
                }
            }
        }
        return {};

    }
};
