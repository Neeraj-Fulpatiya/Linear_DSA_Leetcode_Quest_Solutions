class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
       int  n = s.size();
       vector<int>ans(n ,INT_MAX);  
       int prev =-1;   

       for(int i =0 ;i<n ;i++){
        if(s[i] == c){
           prev =i ; 
        }

        if(prev!=-1){
            ans[i]=abs(i-prev);
        }
       } 



       

       prev =-1;

       for(int i = n-1 ;i>=0 ;i--){
        if(s[i] == c){
            prev =i ;
        }

        if(prev!= -1){
            ans[i] =min(ans[i] , abs(prev-i)); //min of the current calculation or which are already store in the ans vector
        }
       }
       



       return ans; 
    }
};