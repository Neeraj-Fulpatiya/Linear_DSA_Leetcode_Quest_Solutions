class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1;
        long area = 0;
        long  maxarea = 0;

        while(left<right){
            area = min(height[left], height[right] ) * (right- left );
            
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
            maxarea = max(area, maxarea);
        }
        return maxarea;

        
    }
};