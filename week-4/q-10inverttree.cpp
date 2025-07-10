class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return nullptr ;
       TreeNode* left=new TreeNode;
        TreeNode* right=new TreeNode;
         left=invertTree(root->left);
         right=invertTree(root->right);
         root->left=right;
         root->right=left;
         return root;

    }
};
