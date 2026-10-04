class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int row=0;
        int cols=m-1;
        while(row<n && cols>=0){
            if(matrix[row][cols]==target){
                return true;
            }
            else if(matrix[row][cols]<target){
                row++;
            }
            else{
                cols--;
            }
        }
        return false;
    }
};