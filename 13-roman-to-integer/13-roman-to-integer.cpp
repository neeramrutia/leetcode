class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i+1<n)
            {
                if(s[i]=='I' && s[i+1]=='V')
                {
                    ans=ans+4;
                    i++;
                    continue;
                }
                if(s[i]=='I' && s[i+1]=='X')
                {
                    ans=ans+9;
                    i++;
                    continue;
                }
                if(s[i]=='X' && s[i+1]=='L')
                {
                    ans=ans+40;
                    i++;
                    continue;
                }
                if(s[i]=='X' && s[i+1]=='C')
                {
                    ans=ans+90;
                    i++;
                    continue;
                }
                if(s[i]=='C' && s[i+1]=='D')
                {
                    ans=ans+400;
                    i++;
                    continue;
                }
                if(s[i]=='C' && s[i+1]=='M')
                {
                    ans=ans+900;
                    i++;
                    continue;
                }
            }
            if(s[i]=='M')
            {
                ans=ans+1000;
                continue;
            }
            if(s[i]=='D')
            {
                ans=ans+500;
                continue;
            }
            if(s[i]=='C')
            {
                ans=ans+100;
                continue;
            }
            if(s[i]=='L')
            {
                ans=ans+50;
                continue;
            }
            if(s[i]=='X')
            {
                ans=ans+10;
                continue;
            }
            if(s[i]=='V')
            {
                ans=ans+5;
                continue;
            }
            if(s[i]=='I')
            {
                ans=ans+1;
                continue;
            }
            
        }
        return ans;
    }
};