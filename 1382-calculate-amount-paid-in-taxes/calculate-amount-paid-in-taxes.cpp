class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double ans = 0;
        
        int prev = 0;
        for(auto e : brackets) {
            int upper = e[0];
            double rate = (double)e[1] / (double)100;

            ans += (double)(min(income, upper) - prev) * rate;

            prev = min(income, upper);
            if(prev >= income) break;
        }

        return ans;
    }
};