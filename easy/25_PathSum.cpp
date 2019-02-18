Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

Solution:
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
            return false;
        else if(root->left == NULL && root->right == NULL && root->val == sum)
            return true;
        else
            return (hasPathSum(root->left, sum-root->val)||(hasPathSum(root->right, sum- root->val)));
    }
};