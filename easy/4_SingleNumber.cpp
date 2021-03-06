Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1

Solution:
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            num = num ^ nums[i];
        }
        return num;
        
    }
};