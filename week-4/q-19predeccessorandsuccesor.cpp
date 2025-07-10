class Solution {
  public:
  
    Node* right(Node* root){
        while (root && root->right) {
            root = root->right;
        }
        return root;
    }

    Node* left(Node* root){
        while (root && root->left) {
            root = root->left;
        }
        return root;
    }

    Node* pred(Node* root, int key){
        if (root == nullptr) return nullptr;

        if (root->data < key) {
            Node* temp = pred(root->right, key);
            return (temp != nullptr) ? temp : root;
        }
        else if (root->data > key) {
            return pred(root->left, key);
        }
        else {
            return right(root->left);
        }
    }

    Node* succ(Node* root, int key){
        if (root == nullptr) return nullptr;

        if (root->data > key) {
            Node* temp = succ(root->left, key);
            return (temp != nullptr) ? temp : root;
        }
        else if (root->data < key) {
            return succ(root->right, key);
        }
        else {
            return left(root->right);
        }
    }

    vector<Node*> findPreSuc(Node* root, int key) {
        vector<Node*> res;
        Node* p = pred(root, key);
        Node* s = succ(root, key);

        // Even if one is null, return the other as nullptr
        res.push_back(p);
        res.push_back(s);
        return res;
    }
};
