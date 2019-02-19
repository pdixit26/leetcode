An array is monotonic if it is either monotone increasing or monotone decreasing.

An array A is monotone increasing if for all i <= j, A[i] <= A[j].  An array A is monotone decreasing if for all i <= j, A[i] >= A[j].

Solution:

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool increasing = true;
        bool decreasing = true;
        for(int i=0;i<A.size()-1; i++)
        {
            if(A[i] < A[i+1])
                decreasing = false;
            if(A[i] > A[i+1])
                increasing = false;
        }
        return (increasing || decreasing);
        
    }
};