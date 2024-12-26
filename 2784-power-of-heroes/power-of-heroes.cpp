typedef long long ll;
class Solution {
public:
    const static ll mod=1e9+7;
    int sumOfPower(vector<int>& nums) 
    {
        ll prefix=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        ll res=0;
        for(int i=0;i<n;i++)
        {
            prefix<<=1;
            if(i-1>=0)prefix+=nums[i-1];
            prefix=prefix%mod;
            ll cur=(1ll*nums[i]*nums[i])%mod;
            res+=cur*prefix;
            res+=((1ll*nums[i]*nums[i])%mod)*nums[i];
            res=res%mod;
        }
        return res;
    }
};

 