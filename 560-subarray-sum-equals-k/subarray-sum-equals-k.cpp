class Solution {
public:
    // int subarraySum(vector<int>& nums, int k) {
        // vector<int>pSum;
// int ans=0;


//         unordered_map<int,int>m;
// m[0]=1;
//         int sum=0;
//         for(auto s:nums){
//             sum+=s;
//             // pSum.push_back(sum);
//             m[sum]++;
//         }
//         int ans=0;
// for(auto i=m.begin();i!=m.end();i++){
//     int seek=k-i->first;
//     if(m.count(seek)){
// ans=ans+i->second;
//     }
// }
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    int sum = 0, ans = 0;

    m[0] = 1;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (m.count(sum - k)) {
            ans += m[sum - k];
        }

        m[sum]++;
    }

    return ans;
}


    
};