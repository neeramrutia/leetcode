class Solution {
public:
    int tribonacci(int n) {
        if(n==0|| n==1)
            return n;
        if(n==2)
            return 1;
        if(n==3)
            return 2;
        int a=1,b=1,c=2,d;
       for(int i=1;i<=n-3;i++)
       {
           d=a+b+c;
           a=b;
           b=c;
           c=d;
       }
        return d;
           
    }
};