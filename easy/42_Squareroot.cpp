Find square root of a number

Solution:
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)
            return x;
        int sqrt = 1;
        long i=1;
        
        while(i*i<=x)
        {
            sqrt = i++;
        }
        return sqrt;
    }
};