 Convert Sorted Array to Binary Search Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if( nums.size()==0)
            return NULL;
       return constructTree(nums, 0, nums.size()-1);
        
    }
    TreeNode* constructTree(vector<int>& nums, int start, int end)
    {
        if(start>end)
            return NULL;
        int mid = start + (end-start)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = constructTree(nums, start, mid-1);
        root->right = constructTree(nums, mid+1, end);
        return root;
    }
};