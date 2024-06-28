class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>indegree(n,0),vn(n,0);
        for(auto i:roads)
        {
            indegree[i[0]]++;
            indegree[i[1]]++;
        }
        vector<pair<int,int>>p;
        for(int i=0;i<indegree.size();i++)
        {
            p.push_back({indegree[i],i});
        }
        sort(p.begin(),p.end(),greater<pair<int, int> >());
        for(auto i:p)
        {
            i.first=n--;
            vn[i.second]=i.first;
        }
        long long sum=0;
        for(auto i:roads)
        {
            int u=i[0];
            int v=i[1];
            sum+=vn[u]+vn[v];
        }
        return sum;
    }
};