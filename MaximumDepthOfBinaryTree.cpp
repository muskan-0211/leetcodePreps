class Solution {
public:
    // Public function to calculate the maximum depth of a binary tree
    int maxDepth(TreeNode* root) {
        // Base case: If the current node is NULL, return depth 0
        if(root == NULL) 
            return 0;

        // Recursive calls to calculate the maximum depth of the left and right subtrees
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        // Return the maximum depth of the subtrees plus 1 (for the current level)
        return max(left, right) + 1;
    }
};
