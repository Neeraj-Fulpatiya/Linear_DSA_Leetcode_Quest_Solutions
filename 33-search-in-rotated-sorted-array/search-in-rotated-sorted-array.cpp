class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int n=nums.size();
        int idx=-1;
        int l=0,h=n-1;
        bool found=false;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]==tar){
                idx=m;
                found=true;
            }
            if(nums[m]>=nums[l]){
              if(tar>=nums[l]&&tar<=nums[m]){
                 h=m-1;
              }
              else{
                l=m+1;
              }
            }
            else{
                if(tar>=nums[m]&&tar<=nums[h]){
                    l=m+1;
                }
                else{
                    h=m-1;
                }

            }
        }
        return (found?idx:-1);
    }
};