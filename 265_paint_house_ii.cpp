class Solution {
public:

    int minCostII(vector<vector<int>> &c) 
    {
        
        int n=c.size();
        if(n==0)return 0;
        int m=c[0].size();
        if(m==0)return 0;
        if(n==1&& m==1)return c[0][0];
       
        
        int dp[n][m];
        
         int mn=INT_MAX;
        for(int i=0;i<m;i++)
        {
            dp[0][i]=c[0][i];
            mn=min(mn,dp[0][i]);
        }
        
        if(n==1)return mn;
        mn=INT_MAX;
       
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                dp[i][j]=INT_MAX;
                for(int k=0;k<m;k++)
                {
                    if(k!=j)
                    {
                        dp[i][j]=min(dp[i-1][k]+c[i][j],dp[i][j]);
                    }
                    if(i==n-1)
                    {
                        mn=min(mn,dp[i][j]);
                    }
                }
            }
        }
        return mn;
        
    }
};