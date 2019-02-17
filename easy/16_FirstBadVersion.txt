Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

Solution:
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, r = n; 
        while(l<r)
        {
            int mid = l + (r - l)/2;
            if(!isBadVersion(mid))
                l = mid+1;
            else 
                r = mid;
        }
        return l;
    }
};