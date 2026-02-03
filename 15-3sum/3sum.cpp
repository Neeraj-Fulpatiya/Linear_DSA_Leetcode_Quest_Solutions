class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
int n=nums.size();
        for(int i=0;i<n-2;i++){
int tar=-(nums[i]);
int l=i+1;
int h=n-1;
while(l<h){
    // int m=(l+h)/2;
    int sum=nums[l]+nums[h];
if(sum==tar){
       vector<int>trip={nums[i],nums[l],nums[h]};
       sort(trip.begin(),trip.end());
       s.insert(trip);
       l++;h--;
}
else if(sum<tar){
    l++;
}
else{
    h--;
}
}

        }
for(auto ele:s){
    res.push_back(ele);
}
return res;
    }
};