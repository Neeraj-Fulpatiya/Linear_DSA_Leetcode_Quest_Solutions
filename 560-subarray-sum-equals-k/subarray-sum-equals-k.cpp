class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // vector<int>pSum;
int ans=0;
int n=nums.size();
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        sum+=nums[j];
        if(sum==k)ans++;
    }
}

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
return ans;
    }
};