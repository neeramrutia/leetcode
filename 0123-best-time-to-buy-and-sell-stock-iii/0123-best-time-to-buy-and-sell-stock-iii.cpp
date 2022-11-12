class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(4,-1)));
        return dfs(0,prices,true,false,0,dp);
    }
     int dfs(int i,vector<int>& prices,bool buy,bool sell,int count,vector<vector<vector<int>>>& dp)
    {
        if(i==prices.size()||count>=4)
            return 0;
         if(dp[i][buy][count]!=-1)
             return dp[i][buy][count];
         int ans=0;
        if(buy)
        {
            int b=dfs(i+1,prices,true,false,count,dp);
            int nb=-prices[i]+dfs(i+1,prices,false,true,count+1,dp);
            ans=max(b,nb);
        }
        else
        {
           int s=dfs(i+1,prices,false,true,count,dp);
            int ns=prices[i]+dfs(i+1,prices,true,false,count+1,dp);
               ans=max(s,ns);
        }
        
        return dp[i][buy][count]=ans;
    }
};