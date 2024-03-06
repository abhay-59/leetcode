int dr[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dc[] = {0, 0, -1, 1, -1, 1, -1, 1};
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1) {
            return -1;
        }
        queue<pair<pair<int, int>, int>> q;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        q.push({{0, 0}, 1});
        vis[0][0]=1;
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int len=q.front().second;
            q.pop();
            if(r==n-1 && c==n-1)return len;
            for(int i=0;i<8;i++)
            {
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<n && !grid[nr][nc] && !vis[nr][nc]){
                    q.push({{nr,nc},len+1});
                    vis[nr][nc]=1;
                }
            }
        }
        return -1;
    }
};