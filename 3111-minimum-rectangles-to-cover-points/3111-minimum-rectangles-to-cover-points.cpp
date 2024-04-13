class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        int ans = 0;
        sort(points.begin(), points.end());
        int idx = points[0][0];
        for(int i = 1; i < points.size(); i++){
            if(points[i][0] - idx > w){
                idx = points[i][0];
                ans++;
            }
        }
        return ans+1;
    }
};