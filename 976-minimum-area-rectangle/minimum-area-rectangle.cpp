class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        #define PT(x, y) (long)x*65536+ (long)y
        unordered_set<long  > pts;
        for (auto& pt: points)    //collect points and put them into a set.
            pts.insert(PT(pt[0], pt[1]));
        
        int res = INT_MAX;
        for (int i=0; i<points.size()-1; i++)
            for (int j=i+1; j<points.size(); j++) {    // find any two points
                int dx = points[i][0] - points[j][0];
                int dy = points[i][1] - points[j][1];
                if (dx!=0 && dy!=0        // if they are not in one line 
					   && pts.count( PT(points[i][0], points[j][1]))       //if there are another two points to make a rectangle
                       && pts.count( PT(points[j][0], points[i][1])) ) 
                        res = min(res, abs(dx * dy) );
            }
        return (res==INT_MAX)?0:res;
    }
};