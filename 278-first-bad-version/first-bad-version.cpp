// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(long long n) {
        long long inx=n;
        long long low=1,high=n;
        while(low<=high){
            long long mid=(low+high)/2;
            bool ans=isBadVersion(mid);
            if(ans){
                inx=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return inx;
    }
};