class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int f=intervals[0][0],s=intervals[0][1];
        int n=intervals.size();
        for(int i=0;i<n-1;i++){
            vector<int>v;
            if(s>=intervals[i+1][0]){
                s = max(s, intervals[i+1][1]);
            }
            else{
                v.push_back(f);
                v.push_back(s);
                s=intervals[i+1][1];
                f=intervals[i+1][0];
                ans.push_back(v);
            }
        }
        ans.push_back({f,s});
        return ans;
    }
};