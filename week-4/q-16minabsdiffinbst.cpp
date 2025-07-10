
class Solution {
public:
    int minDiff = INT_MAX;      // Stores the final minimum difference
    TreeNode* prev = nullptr;   // Stores the previous node during in-order traversal

    void inOrder(TreeNode* root) {
        if (!root) return;

        // Traverse the left subtree
        inOrder(root->left);

        // Process current node
        if (prev != nullptr) {
            int diff = abs(root->val - prev->val);  // Find difference between current and previous node
            minDiff = min(minDiff, diff);           // Update minimum difference if needed
        }
        prev = root;  // Move previous to current

        // Traverse the right subtree
        inOrder(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        inOrder(root);      // Start in-order traversal
        return minDiff;     // Return the final minimum difference
    }
};
