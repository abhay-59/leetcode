class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>adj[n],indegree(n,0);
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
            indegree[i[0]]++;
            indegree[i[1]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==1){
            q.push(i);
            }
        }
        map<int,vector<int>>mp;
        int j=0;
        while(!q.empty())
        {
            int qn=q.size();
            j++;
            for(int i=0;i<qn;i++)
            {
                int front=q.front();
                q.pop();
                mp[j].push_back(front);
                for(auto i:adj[front])
                {
                    indegree[i]--;
                    if(indegree[i]==1)q.push(i);
                }
            }
        }
        vector<int>ans(1,0);
        for(auto i:mp)
        {
            ans=i.second;
        }
        return ans;
    }
};