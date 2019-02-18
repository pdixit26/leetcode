Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

Solution:
class Solution {
public:
    bool hasAlternatingBits(int n) {
      int last = n%2;
      n>>=1; 
      while(n)
        {
            int cur  = n%2;
            if(cur == last)
                return false;
            n >>=1;
            last = cur;
        }
        return true;
    }
};