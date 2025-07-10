class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int i=1;
        vector<vector<int>>res;
        queue<TreeNode*>q;
        if(root==NULL)return res;
        q.push(root);
        while(!q.empty()){
            vector<int>level;
            int levelsize=q.size();
            for(int j=0;j<levelsize;j++){
                TreeNode* root=q.front();
                q.pop();
                level.push_back(root->val);
                if(root->left)q.push(root->left);
                if(root->right)q.push(root->right);};
                if(i%2)res.push_back(level);
                else {
                    reverse(level.begin(),level.end());
                        res.push_back(level);};
                i++;}
            
            return res;
        }

    };
