class Solution {
public:
vector<int>res;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)return {};
        inorderTraversal(root->left);
        res.push_back(root->val);
        inorderTraversal(root->right);
        return res;
    }
};
