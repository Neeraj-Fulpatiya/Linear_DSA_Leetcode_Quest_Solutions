class Solution {
public:
    void moveZeroes(vector<int>& nums) {
int l=0;
int n=nums.size();
int r=1;

int idx;
for(int i=0;i<n;i++){
    if(nums[i]==0){
        idx=i;
        break;
    }
}
l=idx,r=idx+1;
while(r<n){
    if(nums[l]==0){
        swap(nums[l],nums[r]);
        r++;
    }
    else{
        l++;
    }
   
}

    }
};