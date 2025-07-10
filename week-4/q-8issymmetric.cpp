class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true;           // both nodes null → OK
        if (!left || !right) return false;          // one null → not symmetric

        return (left->val == right->val) &&         // values must match
               isMirror(left->left, right->right) &&  // outer
               isMirror(left->right, right->left);     // inner
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMirror(root->left, root->right);
    }
};
