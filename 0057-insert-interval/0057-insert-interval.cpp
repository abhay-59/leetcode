class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++){
            int currEnd = intervals[i][1], currStart = intervals[i][0];
            while(res.size() > 0 && res[res.size()-1][1] >= currStart) {
                currEnd = max(res[res.size()-1][1], currEnd);
                currStart = min(res[res.size()-1][0], currStart);
                res.pop_back();
            }
            res.push_back({currStart, currEnd});
            
        }
        return res;
    }
};