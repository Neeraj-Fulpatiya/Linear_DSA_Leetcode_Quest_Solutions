class Solution {
    bool dfs(map<string,vector<pair<string,double>>>adj, string node, string dst, double val,set<string>&vis,vector<double>&ans){
        vis.insert(node);
        if(node==dst){
            ans.push_back(val);
            return true;
        }
        for(auto it: adj[node]){
           if(vis.find(it.first)==vis.end()){
            val*=it.second;
            cout<<val<<" ";
            if(dfs(adj,it.first, dst, val,vis,ans)){
                return true;
            }
            val/=it.second;
           }
        }
        return false;
    }
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        map<string,vector<pair<string,double>>>adj;
        int i=0;
        set<string>st;
        for(auto it: equations){
            adj[it[0]].push_back({it[1],values[i]});
            adj[it[1]].push_back({it[0],1/values[i]});
            i++;
            st.insert(it[0]);
            st.insert(it[1]);
        }
        vector<double>ans;
        for(auto it: queries){
            set<string>vis;
            if(st.find(it[0])!=st.end()&& st.find(it[1])!=st.end()){
            double x=1.0;
            if(!dfs(adj,it[0],it[1],x,vis,ans))ans.push_back(-1);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};