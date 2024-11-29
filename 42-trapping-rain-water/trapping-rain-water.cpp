class Solution {
public:
    int trap(vector<int>& height) {
      int n=height.size();  
//   approach is simple find the tallest building now from start building to that tallest builoding we will first find 
     // water stored considering the tallest rightmx and similarly from that tallest building to the rightmost building
      int tallest=0;
      int index=0;
for(int i=0;i<n;i++){
        //  tallest=max(tallest,height[i]);
    if(tallest<height[i]){
        tallest=height[i];
        index=i;
    }
}
int left=height[0];
int water=0;
// see neighter the first building will store the water nor the last buiolding
for(int i=1;i<index;i++){

if(height[i]<left){
  water+=left-height[i];// why is this building storing water because curr buil ht is lesser than the left one 
//   and it is already shorter than the tallest one which is on the right side of it 
}
else{
    left=height[i];
    // doing this because if current building height is greater the left building which was 
        // tallest  tilll now then water storage would be 0 but the left would upgrade to the curr building height
   
}
}
//  for index where the tallest building currently is , there no water would be logged , therefore not considering that building for
// the water storage
int right=height[n-1];

// starting from the second last building as last wont be storing any
for(int i=n-2;i>index;i--){
    if(height[i]<right){
        water+=right-height[i];
    }
    else{
        right=height[i];// doing this because if current building height is greater the right building which was 
        // tallest  tilll now then water storage would be 0 but the right would upgrade to the curr building height
    }
}
return water;


    }
};
