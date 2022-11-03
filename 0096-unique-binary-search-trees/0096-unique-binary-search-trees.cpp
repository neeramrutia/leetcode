class Solution {
public:
    int numTrees(int n) {
        int arr[n+1];
        arr[0]=1;
        arr[1]=1;
        for(int i=2;i<n+1;i++)
        {
            int total=0;
            for(int j=1;j<=i;j++)
            {
                int left=j-1;
                int right=i-j;
                total=total+arr[left]*arr[right];
            }
            arr[i]=total;
        }
        return arr[n];
    }
};