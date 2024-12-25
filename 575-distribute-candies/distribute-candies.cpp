class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        unordered_set<int> cset(begin(candyType), end(candyType));
        return min(cset.size(), candyType.size() / 2);

    }
};