class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<vector<int>>adj(n+1);
        for(auto i : paths){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> ans(n + 1, -1),res;
        for(int i = 1; i <= n; i++){
            if(ans[i] == -1){
                ans[i] = 1;
                queue<int> q;
                q.push(i);
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    for(auto it : adj[node]){
                        if(ans[it] == -1){
                            vector<int> col(5, 0);
                            for(auto k : adj[it]){
                                if(ans[k] != -1)
                                    col[ans[k]] = 1;
                            }   
                            for(int k = 1; k < 5; k++){
                                if(col[k] == 0){
                                    ans[it] = k;
                                    break;
                                }
                            }
                            q.push(it);
                        }
                    }
                }
            }
        }
        for(int i=1;i<ans.size();i++){
            res.push_back(ans[i]);
        }
        return res;
    }
};