class Solution {
public:
    //  int countPaths(int i,int j,int m,int n,vector<vector<int>>&dp)
    // {
    //     if(i==(m-1)&&j==(n-1)) return 1;
    //     if(i>=m||j>=n) return 0;
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     else return dp[i][j]=countPaths(i+1,j,m,n,dp)+countPaths(i,j+1,m,n,dp);
    // }
    int uniquePaths(int m, int n) {
        // vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        // int num=countPaths(0,0,m,n,dp);
        // return num;

        //BY using Combinations
        //(m+n-2)C(m-1)
            int N = n + m - 2;
            int r = n - 1; 
            double res = 1;
            
            for (int i = 1; i <= r; i++)
                res = res * (N - r + i) / i;
            return (int)res;


    }

    
};
