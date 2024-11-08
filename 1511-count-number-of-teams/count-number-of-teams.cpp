class Solution {
public:
    int solve(vector<int>& x)
    {
        int n=x.size();
        vector<int>pre(n,0);
        int ans=0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(x[i]>x[j])
                {
                    pre[i]++;
                    ans+=pre[j];
                }
            }
        }
        return ans;
    }
    int numTeams(vector<int>& rating) 
    {
        int ans=solve(rating);
        reverse(rating.begin(),rating.end());
        return ans+solve(rating);
            
    }
};