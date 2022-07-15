class Solution {
public:
    int count = 0;
    void solve(int i,int j,int m,int n,vector<vector<int>>&grid,vector<vector<int>>&vis){
        if(i<0 || j<0 || i>=m || j>=n)
            return;
        if(grid[i][j] == 0)
            return;
        if(vis[i][j] == 1)
            return;
        if(grid[i][j] == 1 && vis[i][j] == 0){
            count++;
            vis[i][j] =1;
        solve(i+1,j,m,n,grid,vis);
        solve(i-1,j,m,n,grid,vis);
        solve(i,j+1,m,n,grid,vis);
        solve(i,j-1,m,n,grid,vis);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
      int maxi = 0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1 && vis[i][j] == 0)
                {
                    count = 0;
                    solve(i,j,m,n,grid,vis);
                    maxi = max(maxi,count);
                }
            }
        }
        return maxi;
    }
};