class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> dis(n, vector(n, 10001));
        for(auto i:edges){
            dis[i[0]][i[1]]=i[2];
            dis[i[1]][i[0]]=i[2];
        }
        for (int i = 0; i < n; ++i)
            dis[i][i] = 0;
        for (int k = 0; k < n; ++k)
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < n; ++j)
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
        vector<int>v(n,0);
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; ++j){
                if (dis[i][j] <= distanceThreshold)
                    ++count;
            }
            v[i]=count;
        }
        int mn=*min_element(v.begin(),v.end());
        int ans=-1;
        for(int i=0;i<n;i++){
            if(v[i]==mn)ans=i;
        }
        return ans;
    }
};