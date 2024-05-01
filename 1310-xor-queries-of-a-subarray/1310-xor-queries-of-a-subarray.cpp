class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>pre(n,0);
        int xr=0;
        for(int i=0;i<n;i++){
            xr^=arr[i];
            pre[i]=xr;
        }
        arr.clear();
        int q=queries.size();
        for(auto i:queries){
            int res=0;
            if(i[0]==0)res=pre[i[1]];
            else res=pre[i[1]]^pre[i[0]-1];
            //cout<<res<<endl;
            arr.push_back(res);
        }
        return arr;
    }
};