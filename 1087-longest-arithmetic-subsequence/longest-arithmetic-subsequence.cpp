class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
        int n = A.size();
        int maxi = 0;
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                
                int d = A[j] - A[i];  
                int next = A[j] + d;
                int cnt = 2;
                for (int k = j + 1; k < n; k++){
                    if(A[k] == next){
                        cnt++;
                        next = A[k] + d;
                    }
                }
                maxi = max(maxi, cnt);
            }    
        }
        
        return maxi;
    }
};