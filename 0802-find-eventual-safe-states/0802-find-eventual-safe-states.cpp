class Solution {
public:
    bool dfs(int node,vector<int>&vis,vector<vector<int>>& graph,vector<int>&safe)
    {
        int issafe=true;
        for(auto i:graph[node])
        {
            if(vis[i]==1 || safe[i]==2)
            {
                issafe=false;
                break;
            }
            if(safe[i]==1)continue;
            vis[i]=1;
            if(!dfs(i,vis,graph,safe))issafe=false;
            vis[i]=0;
        }
        safe[node]=issafe?1:2;
        return issafe;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        int n=graph.size();
        vector<int>safe(n,0),vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(safe[i]==0)
            {
                vis[i]=1;
                bool res=dfs(i,vis,graph,safe);
                vis[i]=0;
            }    
        }
        for(int i=0;i<safe.size();i++)
        {
            if(safe[i]==1)ans.push_back(i);
        }
        return ans;
    }
};