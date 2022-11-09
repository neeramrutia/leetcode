class Solution {
public:
    int countPrimes(int n) {
        return SieveOfEratosthenes(n);
    }
    
    int SieveOfEratosthenes(int n)
    {
    int count=0;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
        
    for(int p=2;p<n;p++)
    {
        if(prime[p]==true)
            count++;
    }
        return count;
   }
};