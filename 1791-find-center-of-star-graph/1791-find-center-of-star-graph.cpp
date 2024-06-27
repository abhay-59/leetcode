class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        vector<int>f=edges[0];
        vector<int>s=edges[1];
        if(f[0]==s[0] || f[0]==s[1])return f[0];
        if(f[1]==s[0] || f[1]==s[1])return f[1];
        return -1;
    }
};