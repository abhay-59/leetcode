class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int, int>> adj[n + 1];
        for (int i = 0; i < times.size(); i++) {
            int u = times[i][0];
            int v = times[i][1];
            int w = times[i][2];
            adj[u].push_back({w, v});
        }
        vector<int>time(n+1,INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});
        time[k]=0;
        while(!pq.empty())
        {
            int curt=pq.top().first;
            int curr=pq.top().second;
            pq.pop();
            if(curt<=time[curr])
            {
                for(int i=0;i<adj[curr].size();i++)
                {
                    pair<int,int>edge=adj[curr][i];
                    int tim=edge.first;
                    int nei=edge.second;
                    if(time[nei]>(curt+tim)){
                        time[nei]=curt+tim;
                        pq.push({time[nei],nei});
                    }
                }
            }
        }
        int res=INT_MIN;
        for (int i = 1; i <= n; i++) {
            res = max(res, time[i]);
        }
        if(res==INT_MAX)return -1;
        return res;
    }
};