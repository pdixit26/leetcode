Find the sum of all left leaves in a given binary tree.

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        if(root->left!=NULL && root->left->left == NULL && root->left->right == NULL)
            return root->left->val + sumOfLeftLeaves(root->right);
        else
            return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
        
    }
};