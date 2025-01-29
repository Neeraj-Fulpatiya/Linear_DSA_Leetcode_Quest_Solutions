class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
// int count=0;
// int ans=0;
// int zero=k;
// int l=0;int r=0;

// while(l<=r){

// if(nums[r]==1){
//     count++;
//     r++;
// }
// else if(zero>0 && nums[r]==0){
//     count++;
//     zero--;
//     r++;
// }
// ans=max(ans,count);

// if(zero==0){
//     if(nums[l]!=0){
//         l++;
//         count--;
//     }
//     else{
//         zero++;
//     }

// }




// }
// return ans;
int l=0;
int r=0;
int zero=0;
int ans;
while(r<nums.size()){
    if(nums[r]==0 ){

        zero++;
 }
 while(zero>k){
    if(nums[l]==0)zero--;
    l++;
 }
    if(zero<=k){
        int len=r-l+1;

        ans=max(ans,len);
    }
    r++;

}
return ans;

    }
};