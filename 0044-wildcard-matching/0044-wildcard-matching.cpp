class Solution {
public:
    bool isMatch(string s, string p) {
     string pattern="";
        bool isfirst=true;
        for(int i=0;i<p.length();i++)
        {
            if(p[i]=='*' )
            {
                if(isfirst)
                {
                    pattern=pattern+p[i];
                    isfirst=false;
                }
                
            }
            else
            {
                pattern=pattern+p[i];
                isfirst=true;
            }
        }
        
        bool dp[s.length()+1][pattern.length()+1];
        for(int i=0;i<s.length()+1;i++)
        {
            for(int j=0;j<pattern.length()+1;j++)
                dp[i][j]=false;
        }
        dp[0][0]=true;
       if(pattern[0]=='*')
           dp[0][1]=true;
        
        for(int i=1;i<s.length()+1;i++)
        {
            for(int j=1;j<pattern.length()+1;j++)
            {
                if(pattern[j-1]==s[i-1] || pattern[j-1]=='?')
                    dp[i][j]=dp[i-1][j-1];
                else if(pattern[j-1]=='*')
                {
                    dp[i][j]=dp[i-1][j]||dp[i][j-1];
                }
            }
        }
        return dp[s.length()][pattern.length()];
    }
};