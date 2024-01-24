class Solution {
public:
    // Public function to convert a sorted array to a balanced binary search tree
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // Call the helper function build to construct the binary search tree
        // Pass the array, along with the start (0) and end (nums.size() - 1) indices
        return build(nums, 0, nums.size() - 1);
    }

    // Helper function to build the binary search tree recursively
    TreeNode* build(vector<int>& nums, int l, int r) {
        // Base case: if the left index is greater than the right index, return nullptr
        if (l > r)
            return nullptr;

        // Calculate the middle index
        int m = (l + r) / 2;

        // Create a new TreeNode with the value at the middle index
        TreeNode* node = new TreeNode(nums[m]);

        // Recursively build the left subtree with elements to the left of the middle index
        node->left = build(nums, l, m - 1);

        // Recursively build the right subtree with elements to the right of the middle index
        node->right = build(nums, m + 1, r);

        // Return the constructed node
        return node;
    }
};
