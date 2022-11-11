class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<=2)
            return 0;
         int dif=nums[0]-nums[1];
        int count=1;
        int res=0;
           for(int i=1;i<nums.size()-1;i++)
           {
               if(nums[i]-nums[i+1]==dif)
                   count++;
               else
               {
                   res=res+((count-1)*count)/2;
                   dif=nums[i]-nums[i+1];
                   count=1;
               }
                   
           }
        res=res+((count-1)*count)/2;
        return res;
    }
};