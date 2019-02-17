A peak element is an element that is greater than its neighbors.

Given an input array nums, where nums[i] ? nums[i+1], find a peak element and return its index.

Solution:
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() -1;
        while(left<right)
        {
            int mid = left + (right -left)/2;
            if(nums[mid]<nums[mid+1])
                left = mid+1;
            else 
                right = mid;
        }
        return left;
    }
};
