class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int years[101] = {0};
        for(auto &log : logs) {
            years[log[0] - 1950]++;
            years[log[1] - 1950]--;
        }
        int totalAlive = 0;
        int maxAlive = 0;
        for(auto &it : years) {
            totalAlive += it;
            it = totalAlive;
            maxAlive = max(maxAlive, totalAlive);
        }
        int y = 1950;
        for(; y <= 2050; ++y) {
            if(years[y - 1950] == maxAlive)
                break;
        }
        return y;
    }
};