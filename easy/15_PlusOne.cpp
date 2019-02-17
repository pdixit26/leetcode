Given a non-empty array of digits representing a non-negative integer, plus one to the integer.
Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.

Solution:
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    vector<int> result;
    int carry = 0;
    for(int i = digits.size()-1; i>=0; i--)
    {
        int sum = digits[i]+carry;
        if(i == digits.size()-1)
            sum += 1;
        result.push_back(sum%10);
        carry = sum/10;
        
    }
        if(carry)
            result.push_back(1);
        reverse(result.begin(), result.end());
        return result;
        
    }
};