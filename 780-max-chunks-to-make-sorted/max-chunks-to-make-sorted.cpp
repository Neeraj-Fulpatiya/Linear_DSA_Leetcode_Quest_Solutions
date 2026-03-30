class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        if(arr.size() == 0  || arr.size() == 1)
            return arr.size();

        int count = 0, maxi = 0;
        for(int i = 0; i < arr.size(); i++){
            maxi = max(maxi,arr[i]);
                if(maxi == i) count++;
            }
        return count;
    }
};