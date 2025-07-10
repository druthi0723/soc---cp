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
 vector<int>res;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)return {};
        inorderTraversal(root->left);
        res.push_back(root->val);
        inorderTraversal(root->right);
        return res;
    };
        TreeNode* buildBST(vector<int>& nums, int start, int end) {
        if (start > end) return nullptr;

        int mid = (start + end) / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        root->left = buildBST(nums, start, mid - 1);   // build left subtree
        root->right = buildBST(nums, mid + 1, end);    // build right subtree

        return root;
    };
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> sol = inorderTraversal(root);
        return buildBST(sol,0,sol.size()-1);
    }
};
