class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>vis(n,0);
        queue<int>q;
        q.push(0);
        vis[0] = 1;
        while(!q.empty()){
            vector<int> room = rooms[q.front()];
            q.pop();
            for(auto key : room){
                if(!vis[key]){
                    vis[key] = true;
                    q.push(key);
                }
            }
        }
        for(auto i:vis){
            if(i==0)return false;
        }
        return true;
    }
};