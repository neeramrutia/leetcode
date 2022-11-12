class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        if(n==1)
            return 1;
       vector<long> ind(primes.size(),0);
        vector<long> ans;
        ans.push_back(1);
        long answer=INT_MAX;
        while(ans.size()<n)
        {
            answer=INT_MAX;
            for(int i=0;i<primes.size();i++)
            {
                answer=min(answer,primes[i]*ans[ind[i]]);
            }
        
            for(int i=0;i<primes.size();i++)
            {
                if(answer==primes[i]*ans[ind[i]])
                   ind[i]++;
            }
            ans.push_back(answer);
        }
        
        return answer;
        
    }
};