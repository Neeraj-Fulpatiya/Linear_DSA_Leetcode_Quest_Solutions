class Solution {
public:
    void sortColors(vector<int>& v) {
        
        int n=v.size();
    int l=0,m=0,h=n-1;
while(m<=h){
    if(v[m]==0){
        swap(v[l],v[m]);
    m++;
    l++;
        
    }
        else if(v[m]==2){
            swap(v[m],v[h]);
            h--;
        }
else{
    m++;
}
    }

    }
};