class Solution {
public:
bool comp(string a,string b){
return a+b>b+a;
}
    string largestNumber(vector<int>& nums) {
sort(nums.rbegin(),nums.rend());



vector<string>str;
// for(int )
for(auto p:nums){
    str.push_back(to_string(p));

}

sort(str.begin(), str.end(), [](const string &a, const string &b) {
    return a + b > b + a;  // Custom sorting logic
});  

string ans="";
for(auto s:str){
    ans+=s;
}
if(ans[0]=='0')return "0";
return ans;



    }
};