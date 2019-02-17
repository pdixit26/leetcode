Given a 32-bit signed integer, reverse digits of an integer.
SOlution:
class Solution {
public:
    int reverse(int x) {
        long result=0;
        while(x)
        {
             if ( (INT_MAX/10) < result  || (INT_MIN/10) > result){
                return 0;
            } 
            result = result*10+ x%10;
            x = x/10;
        }
        return result;
    }
};