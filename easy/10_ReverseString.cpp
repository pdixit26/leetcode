Write a function that reverses a string. The input string is given as an array of characters char[].

Solution:
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        while(i<j)
        {
            char tmp = s.at(i);
            s.at(i++) = s.at(j);
            s.at(j--) = tmp;
            
        }
        
    }
};