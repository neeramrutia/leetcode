class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)
            return 1;
        int sum=10;
        int inc=9;
        int mul=9;
        for(int i=1;i<n;i++)
        {
            sum=sum+inc*mul;
            inc=inc*mul;
            mul--;
        }
        return sum;
    }
};