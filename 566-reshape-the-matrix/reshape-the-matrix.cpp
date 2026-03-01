#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        int m = mat.size();
        if (m == 0) return mat;
        int n = mat[0].size();
        
        // If total elements mismatch, cannot reshape
        if (m * n != r * c) 
        {
            return mat;
        }
        
        vector<vector<int>> res(r, vector<int>(c));
        
        // Using a single index k to map through all elements
        for (int k = 0; k < m * n; k++) 
        {
            // source in original matrix
            int i_src = k / n;
            int j_src = k % n;
            
            // destination in new matrix
            int i_dst = k / c;
            int j_dst = k % c;
            
            res[i_dst][j_dst] = mat[i_src][j_src];
        }
        
        return res;
    }
};