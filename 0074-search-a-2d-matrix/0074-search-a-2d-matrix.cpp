class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int lr =0,hr=m-1,lrr=0,hrr=n-1;
        while(lr<=hr){
            int mid = (lr+hr)/2;
            if(matrix[mid][0]<=target && matrix[mid][n-1]>=target){
                while(lrr<=hrr){
                    int midr = (lrr+hrr)/2;
                    if(matrix[mid][midr]==target)return true;
                    else if(matrix[mid][midr] > target)hrr=midr-1;
                    else lrr=midr+1;
                }
                return false;
            }else if(matrix[mid][0]>target)hr=mid-1;
            else lr=mid+1;
        }
        return false;
        
    }
};