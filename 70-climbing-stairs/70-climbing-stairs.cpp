class Solution {
public:
    int climbStairs(int n) {
      int a=1;
    int b =2;
     int c;
        if(n==1)
            return 1;
        else if(n==2)
            return 2;
        else{
            for(int i=1;i<=n-2;i++)
            {
                c=a+b;
                a=b;
                b=c;
            }
            return c;
        }
    }
};