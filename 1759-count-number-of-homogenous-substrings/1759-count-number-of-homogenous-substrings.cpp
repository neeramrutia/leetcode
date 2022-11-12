class Solution {
public:
    int countHomogenous(string s) {
        char temp=s[0];
        long long count=1;
        long long res=0;
        int n=s.length();
        for(int i=1;i<n;i++)
        {
            if(temp==s[i])
                count++;
            else
            {
                res=(res+((count+1)*(count))/2)%1000000007;
                count=1;
                temp=s[i];
            }
        }
        res=(res+((count+1)*(count))/2)%1000000007;
        return res;
    }
};