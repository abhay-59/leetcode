class Solution {
public:
    bool dfs(int node, int parent, vector<vector<int>>& adj, vector<bool>& vis) {
        vis[node] = true;
        for(auto it : adj[node]) {
            if(!vis[it]){
                if(dfs(it, node, adj, vis)) return true;
            }else if(it!=parent) return true;
        }
        return false;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>> adj(n+1);    
        for(auto i : edges) {
            vector<bool> vis(n+1, 0); 
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
            if(dfs(i[0], -1, adj, vis)) return i;
        }
        return {};
    }
};