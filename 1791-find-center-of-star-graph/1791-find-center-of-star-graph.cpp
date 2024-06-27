class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        vector<int>f=edges[0];
        vector<int>s=edges[1];
        int f0=f[0],f1=f[1],s0=s[0],s1=s[1];
        if(f0==s0)return f0;
        if(f0==s1)return f0;
        if(f1==s0)return f1;
        if(f1==s1)return f1;
        return -1;
    }
};