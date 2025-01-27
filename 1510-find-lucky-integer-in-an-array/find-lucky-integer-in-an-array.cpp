class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int,int>mp;

       for(auto s:arr){
      mp[s]++;
       } 
    // }
    int ans=-1;
    for(int i=0;i<arr.size();i++){
if(mp[arr[i]]==arr[i]){
    ans=max(ans,mp[arr[i]]);

}
    }
    return ans;  
    }
};