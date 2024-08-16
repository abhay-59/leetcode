class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int omx=-1e5;
        int omn=1e5;
        int mx=0;
        int n=arrays.size();
        for(auto i:arrays){
            int b=i[0];
            int e=i.back();
            mx=max({mx,e-omn,omx-b});
            omn=min(omn,b);
            omx=max(omx,e);
        }
        return mx;
    }
};