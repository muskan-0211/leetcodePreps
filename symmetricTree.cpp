/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // Helper function to check symmetry between two subtrees
    bool match(TreeNode* root1, TreeNode* root2){
        if(root1 != NULL && root2 != NULL) {
            // Recursive checks for symmetry
            bool a = match(root1->left, root2->right);   // Check left subtree of root1 with right subtree of root2
            bool b = match(root1->right, root2->left);   // Check right subtree of root1 with left subtree of root2
            
            // Check if values are equal and both recursive checks are true
            if((root1->val == root2->val) && a && b) {
                return true;  // Subtrees are symmetric
            } else {
                return false;  // Subtrees are not symmetric
            }
        } else if(root1 == NULL && root2 == NULL) {
            return true;  // Both subtrees are NULL, considered symmetric
        } else {
            return false;  // One subtree is NULL while the other is not, considered not symmetric
        }
    }

    // Public function to check if the entire tree is symmetric
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) {
            return true;  // Empty tree is considered symmetric
        }
        return match(root->left, root->right);  // Check symmetry between left and right subtrees of the root
    }
};



//======================================================
class Solution {
public:
    // Public function to check if the entire tree is symmetric
    bool isSymmetric(TreeNode* root) {
        return isSymmetric(root, root);
    }

    // Private helper function to check symmetry between two subtrees
    bool isSymmetric(TreeNode* p, TreeNode* q) {
        // Base case: if either subtree is NULL, return true if both are NULL, false otherwise
        if (!p || !q)
            return p == q;

        // Check if values of corresponding nodes are equal
        // Check symmetry between left subtree of p and right subtree of q
        // Check symmetry between right subtree of p and left subtree of q
        return p->val == q->val &&
               isSymmetric(p->left, q->right) &&
               isSymmetric(p->right, q->left);
    }
};
