The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

SOlution:
class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = 0;
        while(x>0 || y>0)
        {
            result += x%2 ^ y%2;
            x >>=1;
            y >>=1;
            
        }
        return result;
        
    }
};