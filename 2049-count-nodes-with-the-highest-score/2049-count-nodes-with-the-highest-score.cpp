class Solution {
public:
    int dfs(int src,vector<vector<int>>&adj,vector<int>&size){
         int ans = 1;
         for(auto i:adj[src]){
             ans += dfs(i,adj,size);
         }
         return size[src] = ans; 
     }
    int countHighestScoreNodes(vector<int>& parents) {
        int n=parents.size();
        vector<vector<int>>adj(n);
        for(int i=1;i<n;i++){
            int u=parents[i];
            //adj[i].push_back(u);
            adj[u].push_back(i);
        }
        vector<int>size(n,0);
        vector<long long int>v;
        dfs(0,adj,size);
        for(int i=0;i<n;i++){
            long long int prod = 1; 
            prod = max(prod,1ll*n - size[i]);
            for(auto j:adj[i]){
                prod*=size[j];
            }
            v.push_back(prod);
        }
        long long int mx=*max_element(v.begin(),v.end()),ans=0;
        for(auto i:v)if(mx==i)ans++;
        return ans;
    }
};