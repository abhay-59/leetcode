class Solution {
public:
    bool dfs(int node,vector<int>&vis,vector<int>&dfsvis,vector<int>adj[])
    {
        vis[node]=1;
        dfsvis[node]=1;
        for(auto i:adj[node])
        {
            if(!vis[i])
            {
                bool ans=dfs(i,vis,dfsvis,adj);
                if(ans) return true;
            }
            else
            {
                if(dfsvis[i] )return true;
            }
        }
        dfsvis[node]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<int>adj[n];
        vector<int>vis(n+1,0),dfsvis(n+1,0);
        for(auto i:prerequisites)
        {
            adj[i[0]].push_back(i[1]);
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,vis,dfsvis,adj))
                return false;
            }
        }
        //bool res=dfs(0,vis,dfsvis,adj);
        return true;
    }
};
