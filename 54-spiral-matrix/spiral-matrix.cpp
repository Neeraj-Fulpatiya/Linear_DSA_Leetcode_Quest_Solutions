class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        int mRight=col;
        int mDown=row;
        int mLeft=-1;
        int mUp=0;

        vector<int>ans;

        
        int size = row*col;
        int i=0;
        int j=0;
        int itr=1;
        while(itr<=size){
            
            while(itr<=size && j<mRight){
                ans.push_back(matrix[i][j]);
                j++;
                itr++;
            }
            i++;
            mRight--;
            j--;
            while(itr<=size && i<mDown){
                ans.push_back(matrix[i][j]);
                i++;
                itr++;
            }
            mDown--;
            j--;
            i--;

            while(itr<=size && j>mLeft){
                ans.push_back(matrix[i][j]);    
                j--;
                itr++;
            }
            j++;
            mLeft++;
            i--;

            while(itr<=size && i>mUp){
                ans.push_back(matrix[i][j]);
                i--;
                itr++;
            }
            mUp++;
            i++;
            j++;
        }
        return ans;
    }
};