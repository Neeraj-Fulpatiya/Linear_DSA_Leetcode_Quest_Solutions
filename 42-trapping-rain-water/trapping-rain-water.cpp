class Solution {
public:
    int trap(vector<int>& height) {
      int n=height.size();  
      vector<int>rmax(n);
      rmax[n-1]=0;
vector<int>lmax(n);
lmax[0]=0;
int left=height[0];
for(int i=1;i<n;i++){
left=max(left,height[i]);
lmax[i]=left;

}
int right=height[n-1];
for(int i=n-2;i>=0;i--){
right=max(right,height[i]);
rmax[i]=right;
}

int water=0;
int currheight=0;
int waterhold=0;
for(int i=0;i<n;i++){
    if(height[i]<lmax[i] && height[i]<rmax[i]){
currheight=min(lmax[i],rmax[i]);
waterhold=currheight-height[i];
water=water+waterhold;
    }
}
      return water;

    }
};
