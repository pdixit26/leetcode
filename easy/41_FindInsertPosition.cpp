Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Example 1:

Input: [1,3,5,6], 5
Output: 2

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid]<target)
                low = mid+1;
            else 
                high = mid-1;
        }
        
        if(nums[low]<target)
            return low+1;
        else 
            return low;
    }
};