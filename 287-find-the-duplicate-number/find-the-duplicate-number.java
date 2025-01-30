class Solution {
    public int findDuplicate(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer>m=new HashMap<>();

        for(var s:nums)
{
m.put(s,m.getOrDefault(s,0)+1);
if(m.get(s)==2){
    return s;
}
}
// for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
// if(nums[i]==nums[j])return nums[i];
//     }
// }
        return n;
    }
}