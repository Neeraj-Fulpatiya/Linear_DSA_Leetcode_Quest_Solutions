class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int pro=0;
        int bestBuy=nums[0];
        for(int i=1;i<n;i++){
         int curr =nums[i]-bestBuy;
           bestBuy=min(nums[i],bestBuy);
           pro=max(pro,curr);
        }
        return pro;
    }
};