Given a n-ary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Solution:
class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        int d = 0;
        for(auto child:root->children)
            d = max(d, maxDepth(child));
        return d+1;
    }
};