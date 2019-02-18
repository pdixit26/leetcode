Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

Example 1:

Input: [3,0,1]
Output: 2

Solution:
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum1 = n*(n+1)/2;
        int sum2=0;
        for(int i=0;i<n;i++)
        {
            sum2+=nums[i];
        }
        return sum1 - sum2;
        
    }
};