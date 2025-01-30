class Solution {
    public int findDuplicate(int[] nums) {
        int n=nums.length;
        for(int i=0;i<n;i++){
            int x=Math.abs(nums[i]);
            if(nums[x]>0){
                // nums[x]=-nums[x];
                nums[x]=-nums[x];
            }
            else{
                return x;
            }
        }
        return n;
    }
}