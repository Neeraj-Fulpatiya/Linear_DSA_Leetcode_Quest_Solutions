class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         if(k>nums.size()){
            k=k%nums.size();
        }
        int ind=nums.size()-k;
        reverse(nums.begin(),nums.begin()+ind);
        reverse(nums.begin()+ind,nums.end());
        reverse(nums.begin(),nums.end());
     }
};