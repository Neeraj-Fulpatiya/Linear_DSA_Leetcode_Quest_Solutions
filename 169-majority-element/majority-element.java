class Solution {
    public int majorityElement(int[] nums) {
        // this is not optimized as i m learning java and doing cod ein this
        HashMap<Integer, Integer>mpp=new HashMap<>();
    
// for(auto it:nums){
//     mpp[it]++;
// }
    // mpp.put(it)
for (int it : nums) {
            mpp.put(it, mpp.getOrDefault(it, 0) + 1);
        }
        for(int i=0;i<nums.length;i++){
            if(mpp.get(nums[i])>nums.length/2){
              return  nums[i];
            }
        }
        return 1;

    }
}