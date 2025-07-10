class Solution {
public:
vector<int>res;
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                if(i==size-1)res.push_back(node->val);
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            };
            
        }

    return res;}
};
