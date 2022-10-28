class Solution {
public:
    int numSquares(int n) {
        int arr[100];
        for(int i=0;i<100;i++)
        {
            arr[i]=(i+1)*(i+1);
        }
        
        int dp[101][n+1];
        for(int i=0;i<n+1;i++)
        {
            dp[0][i]=INT_MAX-1;
        }
        for(int i=1;i<101;i++)
        {
            dp[i][0]=0;
        }
        
        for(int i=1;i<101;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-arr[i-1]]);
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[100][n];
    }
};