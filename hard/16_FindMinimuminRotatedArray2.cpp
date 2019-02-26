Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).

Find the minimum element.

The array may contain duplicates.

class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int low = 0;
        int high = nums.size()-1;
        while(low<high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid]<nums[high])
                high = mid;
            else if(nums[mid]>nums[high])  
                low = mid+1;
            else
            {
                int j=mid+1;
                while(j<high && nums[j] == nums[high]) j++;
                if(nums[j]<nums[high])
                    return nums[j];
                else
                    high = mid;
            }
        }
        return nums[low];
    }
};