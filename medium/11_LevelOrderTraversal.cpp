Level Order Traversal of Binary Tree

Solution:

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
         vector<vector<int>>  result;
         levelOrderTraverse(root,0, result);
        return result;
    }
    
   void levelOrderTraverse(TreeNode* root, int level, vector<vector<int>> &result)
    {
        if(root == NULL)
            return;
        if(level >= result.size())
            result.push_back(vector<int>());
       result[level].push_back(root->val);
       levelOrderTraverse(root->left, level+1, result);
       levelOrderTraverse(root->right, level+1, result);
        
            
    }
};