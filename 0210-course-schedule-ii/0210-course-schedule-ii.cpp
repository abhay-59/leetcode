class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<int>adj[n],ans;
        for(auto i:prerequisites)
        {
            adj[i[0]].push_back(i[1]);
        }
        vector<int>indegree(n,0);
        for(int i=0;i<n;i++)
        {
            for(auto j:adj[i])
            {
                indegree[j]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)q.push(i);
        }
        while(!q.empty())
        {
            int front=q.front();
            q.pop();
            ans.push_back(front);
            for(auto i:adj[front])
            {
                if(--indegree[i]==0)q.push(i);
            }
        }
        reverse(ans.begin(),ans.end());
        if(ans.size()!=n) return {};
        return ans;
    }
};