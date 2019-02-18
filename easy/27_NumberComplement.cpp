Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.

class Solution {
public:
    int findComplement(int num) {
        int result=0;
        int power = 1;
        while(num)
        {
            result += (num%2 ^ 1)*power;
            num >>= 1;
            power <<= 1;
        }
        return result;
    }
};