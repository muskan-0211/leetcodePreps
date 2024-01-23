class Solution {
public:
    // The function to perform inorder traversal recursively
    void inorder(TreeNode* root, vector<int> &ans){
        // Check if the current node is not NULL
        if(root != NULL){
            // Traverse the left subtree
            inorder(root->left, ans);
            // Push the value of the current node into the vector
            ans.push_back(root->val);
            // Traverse the right subtree
            inorder(root->right, ans);
        }
    }

    // The main function to call inorder traversal on the binary tree
    vector<int> inorderTraversal(TreeNode* root) {
        // Vector to store the result of inorder traversal
        vector<int> ans;
        // Call the recursive inorder function starting from the root
        inorder(root, ans);
        // Return the result vector
        return ans;
    }
};
