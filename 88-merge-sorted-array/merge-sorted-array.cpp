class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { 

        int left=m-1;
        int right=n-1;

        int idx=m+n-1;


        while(left>=0 && right>=0)
        {
            if(nums1[left]>nums2[right]) 
            {
                nums1[idx]=nums1[left];
                left=left-1;
            }
            else
            {
                nums1[idx]=nums2[right];
                right=right-1;
            }

            idx=idx-1;
        }

        while(right>=0)
        {
            nums1[idx]=nums2[right];
            idx=idx-1;
            right=right-1;
        }

        }
};