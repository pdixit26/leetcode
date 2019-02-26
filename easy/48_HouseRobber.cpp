You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Input: [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
             Total amount you can rob = 1 + 3 = 4.

Solution:

class Solution {
public:
    int rob(vector<int>& nums) {
    if (nums.size() == 0) return 0;
 
    int dp[nums.size()+1];
    dp[0] = 0;
    dp[1] = nums[0];

    for(int i=1; i<nums.size(); i++)
    {
        int val = nums[i];
       
        dp[i+1] = max(dp[i-1]+val, dp[i] );
    }
    return dp[nums.size()];
  }
};