class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int>v,v1;
        for(auto i:intervals){
            v.push_back(i[0]);
            v1.push_back(i[1]);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        int ans=0,j=0;
        for(auto i:v){
            if(i>v1[j])j++;
            else ans++;
        }
        return ans;
    }
};