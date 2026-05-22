class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) 
    {
        List<List<Integer>> ans = new ArrayList<>();
        Arrays.sort(candidates);

        comb(candidates, 0, new ArrayList<>(), target, candidates.length, ans);

        return ans;
    }

    void comb(int[] nums, int ind, List<Integer> list, int target, int n, List<List<Integer>> ans)
    {
        if(target == 0)
        {
            ans.add(new ArrayList(list));
            return;
        }

        for(int i = ind; i < n && target >= nums[i]; i++)
        {
            list.add(nums[i]);
            comb(nums, i + 1, list, target - nums[i], n, ans);
            list.removeLast();

            while(i + 1 < n && nums[i] == nums[i + 1])
            {
                i++;
            }
        }
    }
}