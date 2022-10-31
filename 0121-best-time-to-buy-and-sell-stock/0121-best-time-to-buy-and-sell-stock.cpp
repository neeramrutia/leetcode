class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int result=INT_MIN;
        
        for(int i=0;i<prices.size();i++)
        {
            mini=min(prices[i],mini);
            result=max(result,prices[i]-mini);
        }
        return result;
    }
};