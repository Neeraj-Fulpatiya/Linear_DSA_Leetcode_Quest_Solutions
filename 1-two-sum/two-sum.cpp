class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;

        }
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(mp[x]){
            if(i!=mp[x]){
                return {i,mp[x]};
            }
            }
        }
        return {};

    }
};