class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        long long sum = 0;
        int n = nums1.size();
        vector<int>v = nums1;
        for(int i=0;i<n;i++){
            sum += abs(nums1[i]-nums2[i]);
        }
        const int M = 1e9+7;
        sort(nums1.begin(),nums1.end());
        long long x = sum;
        for(int i=0;i<n;i++){
            int idx = lower_bound(nums1.begin(),nums1.end(),nums2[i])-nums1.begin();
            if(idx<n) sum = min(sum,x + abs(nums2[i]-nums1[idx])-abs(nums2[i]-v[i]));
            if(idx-1>=0){
                idx--;
                sum = min(sum,x + abs(nums2[i]-nums1[idx])-abs(nums2[i]-v[i]));
            }
        }
        return sum%M;
    }
};