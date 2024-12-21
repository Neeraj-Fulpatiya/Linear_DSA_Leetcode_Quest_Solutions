class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>m; 
        int n=nums.size();
        int cnt=0;
        int maxx=0;
        m[0]=-1; 
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                cnt+=1;
            }
            else
            {
                cnt-=1;
            }

            
            if(m.find(cnt)!=m.end())
            {
                maxx=max(maxx,i-m[cnt]);
            }
            else
            {
                
                m[cnt]=i;
            }
        }

        return maxx;
    }
};