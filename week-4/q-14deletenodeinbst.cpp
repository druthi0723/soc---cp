class Solution {
public:
    TreeNode* IS(TreeNode* root){
        if(root==nullptr)return NULL;
        while(root->left!=nullptr){
            root=root->left;
        };
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)
          return nullptr;
        if(root->val<key) { 
          root->right=deleteNode(root->right,key);}
        if(root->val>key){  
           root->left=deleteNode(root->left,key);}
        if(root->val==key){
            if(root->left==nullptr){
             TreeNode* temp = root->right;
             delete root;
             return temp; }
            if(root->right==nullptr){
                TreeNode*temp=root->left;
                delete root;
                return temp;
            }
            else{
                TreeNode* temp= IS(root->right);
                root->val=temp->val;
                root->right=deleteNode(root->right,temp->val);
                return root;
            }

        
        }

 return root;   }
};
