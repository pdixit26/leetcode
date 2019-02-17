Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int zeros = 0, j=0;
     for(int i=0; i< nums.size(); i++)
     {
         if(nums[i]==0)
             zeros++;
         else
             nums[j++] = nums[i];
     }
     while(zeros)
     {
         nums[j++]=0;
         zeros--;
     }
        
    }
};