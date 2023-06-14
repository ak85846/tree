class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        int lb=0;
        int ub=(rows* columns)-1;
        
        while(lb<=ub){
            int mid=lb+(ub-lb)/2;
            if(matrix[mid/columns][mid%columns]==target)
                return 1;
            else if(matrix[mid/columns][mid%columns]>target)
                ub=mid-1;
            else
                lb=mid+1;
        }
       

        return 0;
    }
};