Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> list;
        traverse(list, root, 1);
        return list;
    }
    
    void traverse(vector<int> &l, TreeNode* root, int level)
    {
        if(root==NULL)
            return;
        if(level>l.size())
            l.push_back(root->val);
       
        traverse(l, root->right, level+1);
        traverse(l, root->left, level+1);
    }
};