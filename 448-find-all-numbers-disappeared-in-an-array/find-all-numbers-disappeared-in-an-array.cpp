class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
         vector<int> res;
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[i + 1] == 0)
            {
                res.push_back(i + 1);
            }
        }
        return res;
    }
};