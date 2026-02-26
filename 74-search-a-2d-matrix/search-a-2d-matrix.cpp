class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        auto idxFinder = [&](int temp)->pair<int, int>{
            int i = temp/m;
            int j = temp%m;
            return {i, j};
        };
        int l = 0, r = n*m - 1;
        while(l <= r){
            
            int mid = (l + r)/2;
            auto [i, j] = idxFinder(mid);
            if(matrix[i][j] == target) 
            return true;
            if(matrix[i][j] > target){
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return false;
    }
};