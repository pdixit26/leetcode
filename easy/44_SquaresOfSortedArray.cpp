Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

 class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res(A.size());
        int i = 0, j = A.size()-1;
        for(int k = A.size() -1; k>=0 ;k--)
        {
            if(abs(A[i])<abs(A[j]))
            {
                res[k] = A[j] * A[j]; j--;
            }
            else
            {
                 res[k] = A[i] * A[i]; i++;
            }
        }
        return res;
        
    }
};