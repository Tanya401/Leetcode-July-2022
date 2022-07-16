class Solution {
public:
   long long int mod = 1000000007;
    int func(int m,int n,int maxMove,int i,int j,int moves, vector<vector<vector<int>>>&dp){
        if(i<0 || j<0 || i>=m || j>=n)
            return 1;
        if(moves == maxMove)
            return 0;
        if(dp[moves][i][j]!=-1) return dp[moves][i][j];
        long long int ans = 0;
          ans += func(m,n,maxMove,i-1,j,moves+1,dp)%mod;
          ans += func(m,n,maxMove,i+1,j,moves+1,dp)%mod;
          ans += func(m,n,maxMove,i,j-1,moves+1,dp)%mod;
          ans += func(m,n,maxMove,i,j+1,moves+1,dp)%mod;
        
        return dp[moves][i][j] = ans%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
       // int moves = 0;
        vector<vector<vector<int>>> dp(maxMove+1,vector<vector<int>> (m+1,vector<int>(n+1,-1)));
        return func(m,n,maxMove,startRow,startColumn,0,dp);
    }
};