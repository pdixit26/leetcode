Given an integer, write a function to determine if it is a power of two.

Solution 1:

class Solution {
public:
    bool isPowerOfTwo(int n) {
        long i = 1;
      while(i<n)
          i = i*2;
        return (i==n);
    }
};

Solution 2:
Power of 2 means only one bit of n is '1', so use the trick n&(n-1)==0 to judge whether that is the case


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
       return !(n&(n-1));
    }
};
