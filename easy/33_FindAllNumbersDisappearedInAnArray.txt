 Find All Numbers Disappeared in an Array

Given an array of integers where 1 = a[i] = n (n = size of array), some elements appear twice and others appear once.

Find all the elements of [1, n] inclusive that do not appear in this array.

Solution:

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> S(nums.begin(),nums.end());
        vector<int> result;
        
        for(int i=1;i<=nums.size();i++)
        {
            if(S.find(i)==S.end())
                result.push_back(i);
        }
        return result;
    }
};