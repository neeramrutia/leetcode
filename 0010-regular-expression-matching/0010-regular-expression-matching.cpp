class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.length(),m=p.length();
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        dp[0][0]=1;
    
        for(int i=1;i<=m;i++)
        {
            if(p[i-1]=='*')
            dp[i][0]=dp[i-2][0];
        }
    
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(p[i-1]=='.'||p[i-1]==s[j-1])
                {
                    if(dp[i-1][j-1])
                    dp[i][j]=1;
                }
                else if(i>1&&p[i-1]=='*')
                {
                    if(dp[i-2][j])
                    dp[i][j]=1;
                    else
                    {
                        if(p[i-2]==s[j-1]||p[i-2]=='.')
                        {
                            if(dp[i][j-1])
                            dp[i][j]=1;
                        }
                    }
                }
            }
        }
        
        return dp[m][n];
        
        
    }
};