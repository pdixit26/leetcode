Add two binary strings and return their sum.

Solution:
class Solution {
public:
    string addBinary(string a, string b) {
    int i = a.size() -1;
    int j = b.size() -1;
    int c = 0,sum=0;
    string result="";    
    while(i >=0 || j>=0 )
    {
        sum=c;
        if(i>=0)
            sum += a.at(i--) - '0';
        if(j>=0)
            sum += b.at(j--) - '0';
        result = to_string(sum%2) + result;
        c = sum/2;
    }
        if(c)
            result = "1" + result;
        return result;
    }
};