class Solution {
public:
    int maxProfit(vector<int>& prices) {
         vector<vector<int>> dp(prices.size(), vector<int>(2, -1));
        return dfs(prices, 0, 1,dp);
    }
     int dfs(vector<int> &p, int i, bool buy, vector<vector<int>> &dp){
        int n = p.size();
        if(i == n) return 0;
        
        if(dp[i][buy] != -1) return dp[i][buy];
        
        int ans = 0;
        if(buy){
            int b = -p[i] + dfs(p, i+1, 0, dp);
            int nb = 0 + dfs(p, i+1, 1, dp);
            ans = max(b, nb);
        }
        else{
            int s = p[i] + dfs(p, i+1, 1, dp);
            int ns = 0 + dfs(p, i+1, 0, dp);
            ans = max(s, ns);
        }
        return dp[i][buy] = ans;
        
    }
};