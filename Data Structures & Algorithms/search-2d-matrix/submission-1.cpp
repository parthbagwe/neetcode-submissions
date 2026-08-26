class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int size1=matrix.size();
        int size2=matrix[0].size();
        int top=0, bot=size1 -1 ;
        while(top<bot){
            int row=(top+bot)/2;
            if(target>matrix[row][size2-1]){
                top=row+1;
            }
            else if(target<matrix[row][0]){
                bot=row-1;
            }
            else{
                break;
            }
        }
        int row=(top+bot)/2;
        int l=0, r=size2-1;
        while(l<=r){
            int m=(l+r)/2;
            if(target>matrix[row][m]){
                l=m+1;
            }
            else if(target<matrix[row][m]){
                r=m-1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
