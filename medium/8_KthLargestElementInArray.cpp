Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> minHeap;
        for(int i=0;i<nums.size();i++)
        {
            minHeap.push(nums[i]);
        }
        
        int kthLargest = 0;
        for(int i=0; i<k;i++)
        {
            kthLargest = minHeap.top();
            minHeap.pop();
        }
        return kthLargest;
    }
};