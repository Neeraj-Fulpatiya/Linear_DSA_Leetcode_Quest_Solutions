class Solution {
public:
    bool isOverlap(int a,int b,int x,int y){
        if(a<x){
            if(b<x) return false;
            else if(b>=x) return true;
        }
        else if(a>x){
            if(y<a) return false;
            else if(y>=a) return true;
        }
        else if(a==x) return true;
        return false;
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        sort(points.begin(),points.end(),[](const auto& a,const auto& b){
            return a[0]<b[0];
        });
        int min_arrows=1;
        int cur_point[2]={points[0][0],points[0][1]};
        for(int i=1;i<n;i++){
            if(isOverlap(cur_point[0],cur_point[1],points[i][0],points[i][1])){
                cur_point[0]=max(cur_point[0],points[i][0]);
                cur_point[1]=min(cur_point[1],points[i][1]);
            }
            else{
                min_arrows++;
                cur_point[0]=points[i][0];
                cur_point[1]=points[i][1];
            }
        }
        return min_arrows;
    }
};