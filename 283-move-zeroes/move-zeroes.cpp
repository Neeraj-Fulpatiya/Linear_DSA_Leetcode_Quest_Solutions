class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int cnt=0;
      for(auto s:nums)if(s==0)cnt++;
int k=0;
int zero=0;
      for(int i=0;i<nums.size();i++){
if(nums[i]!=0){
    nums[k]=nums[i];
k++;
}
else{
    zero++;
}
      }  
      if(zero>0){
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
      }

    }
};