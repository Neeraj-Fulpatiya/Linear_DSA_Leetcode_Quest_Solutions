class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        unordered_map<int,int>m;
m[0]=1;
int psum=0;
        for(int i=0;i<n;i++){
psum+=nums[i];
if(m.find(psum-k)!=m.end()){
    ans=ans+m[psum-k];
    // m[psum]++;
}
// else{
    m[psum]++;
// }
        }
        
        return ans;
    }
};