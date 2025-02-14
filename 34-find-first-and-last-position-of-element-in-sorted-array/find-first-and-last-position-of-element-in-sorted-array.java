class Solution {
    public int[] searchRange(int[] nums, int t) {
        int s=start(nums,t);
        int e=ending(nums,t);
        int []res=new int[2];
        res[0]=s;
        res[1]=e;
        return res ;
    }
      int start(int[] nums, int t){
      int l=0,r=nums.length-1;
int ans=-1;
      while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==t){
            ans=mid;
            r=mid-1;
        }
        else if(nums[mid]<t){
            l=mid+1;
        }
        else{
            r=mid-1;
        }

      }
      return ans;

    }
          int ending(int[] nums, int t){

        int l=0,r=nums.length-1;
int ans=-1;
      while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==t){
            ans=mid;
            l=mid+1;
        }
        else if(nums[mid]<t){
            l=mid+1;
        }
        else{
            r=mid-1;
        }

      }
      return ans;
        }
}