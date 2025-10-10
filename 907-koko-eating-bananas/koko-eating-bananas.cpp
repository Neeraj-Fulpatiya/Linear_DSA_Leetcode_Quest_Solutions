class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // calculate hours needed at speed mid
            long long hours = 0;
            for (int bananas : piles) {
                hours += (bananas + mid - 1) / mid; // same as ceil(bananas/mid)
            }

            if (hours <= h) {
                ans = mid;      // mid works, but try smaller
                high = mid - 1;
            } else {
                low = mid + 1;  // mid too slow, need faster
            }
        }
        return ans;
    }
};