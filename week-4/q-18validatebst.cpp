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
    bool isValidBST(TreeNode* root) {
        bool valid=true;
        vector<int>sol=inorderTraversal(root);
        sort(sol.begin(),sol.end());
        for(int i=0;i<res.size()-1;i++){
            if(sol[i]!=res[i]){
                valid=false;
          break;  };
        }
        return valid;
    }
};
