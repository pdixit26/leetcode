Given an array of integers, return indices of the two numbers such that they add up to a specific target.
Solution:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i]) != mp.end())
            {
                result.push_back(i);
                result.push_back(mp.find(target-nums[i])->second);
                return result;
            }
            else
                mp[nums[i]] = i;
        }
        return result;
        
    }
};