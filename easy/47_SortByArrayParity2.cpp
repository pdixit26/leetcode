Given an array A of non-negative integers, half of the integers in A are odd, and half of the integers are even.

Sort the array so that whenever A[i] is odd, i is odd; and whenever A[i] is even, i is even.

You may return any answer array that satisfies this condition.

Example 1:

Input: [4,2,5,7]
Output: [4,5,2,7]

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> result(A.size());
        int i = 0, j = 0, k = 1;
        while(i<A.size())
        {
            if(A[i]%2==0) 
            {result[j] = A[i]; j+=2;
            }
            else
            {
              result[k] = A[i]; k+=2;  
            }
            i++;
             
        }
        return result;
    }
};