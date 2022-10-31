class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int row = matrix.size(), col = matrix[0].size(), start = 0, end = row * col - 1, mid, num;
        while(start <= end){
            mid = start + (end - start) / 2;
            num = matrix[mid / col][mid % col];
            if(num == target) return true;
            else if(target > num) start = mid + 1;
            else end = mid - 1;
        }
        return false;
    }
};