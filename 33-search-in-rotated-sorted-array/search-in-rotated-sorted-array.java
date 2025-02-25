class Solution {
    public int search(int[] nums, int t) {
        int l=0;
        int r=nums.length-1;

        int ind=-1;

        while(l<=r){
            int mid=(l+r)/2;
             if(nums[mid]==t)return mid;

            else if(nums[mid]>=nums[l]){
            if(nums[mid]>t && nums[l]<=t ){
              r=mid-1;
            }
            else{
l=mid+1;  
            }
            }
            else{
               if(nums[mid]<t && nums[r]>=t)  {
                l=mid+1;
               }
               else{
                r=mid-1;
               }
            }
        }
        return -1;
    }
}

