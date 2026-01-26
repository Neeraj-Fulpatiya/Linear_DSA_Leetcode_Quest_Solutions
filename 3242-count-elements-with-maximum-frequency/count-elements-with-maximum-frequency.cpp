class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        for(auto s:nums){
            m[s]++;
        }
        // iterator<int,int>it::m.begin();
        map<int,int>::iterator it=m.begin();

        int maxi=-1;
        for( it;it!=m.end();it++){
maxi=max(maxi,it->second);
        }
int ans=0;
        for(it=m.begin();it!=m.end();it++){
            if(it->second==maxi){
                ans+=it->second;
            }
        }
        return ans;

    }
};