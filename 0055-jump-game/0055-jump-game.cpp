class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool dp[nums.size()];
        for(int i=1;i<nums.size();i++)
            dp[i]=false;
        dp[0]=true;
        for(int i=0;i<nums.size();i++)
        {
            if(dp[i]==true)
            for(int j=1;j<=nums[i];j++)
            {
                if((i+j)<nums.size())
                {
                    dp[i+j]=true;
                    if((i+j)==nums.size()-1)
                        return true;
                }
                
                else
                    break;
            }
        }
        if(dp[nums.size()-1]==true)
            return true;
        else
            return false;
    }
    
};