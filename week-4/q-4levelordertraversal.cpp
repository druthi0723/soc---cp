class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        queue<TreeNode*> q;
        if(root==NULL)return res;
        q.push(root);
        while(!q.empty()){
            vector<int>level;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++){
                TreeNode* node=q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);}
                res.push_back(level);
            };
            return res;
        }
    };
