Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.

You may return any answer array that satisfies this condition.

Example 1:

Input: [3,1,2,4]
Output: [2,4,3,1]

Solution:
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i = 0, j = 0, k = A.size() -1;
        vector<int> result(A.size());
        while(i<A.size())
        {
            if(A[i]%2==0)
                result[j++] = A[i]; 
            else
                result[k--] = A[i]; 
            i++;
        }
        return result;
        
    }
};