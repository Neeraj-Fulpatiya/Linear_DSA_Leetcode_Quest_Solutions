class Solution {
    public boolean find132pattern(int[] nums) {
        Stack<Integer> st = new Stack<>();
        int nums_k = Integer.MIN_VALUE;
        for(int i = nums.length - 1; i > -1; i--){
            if(nums[i] < nums_k) return true;
            while(!st.isEmpty() && nums[i] > st.peek()){
                nums_k = st.pop();
            }
            st.add(nums[i]);
        }
        return false;
    }
}