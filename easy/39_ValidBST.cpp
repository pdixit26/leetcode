Check if tree is valid BST

class Solution {
public:
    bool isValidBST(TreeNode* root) {
     if(!root)
         return true;
      long min = LONG_MIN;
      long max = LONG_MAX;
      return isValidBSTwithMinMax(root, min, max);  
    }
    bool isValidBSTwithMinMax(TreeNode* root, long min, long max)
    {
        if(!root)
            return true;
        else if(root->val <= min || root->val >= max)
            return false;
        else 
            return isValidBSTwithMinMax(root->left, min, root->val) && isValidBSTwithMinMax(root->right, root->val, max);
    }
};