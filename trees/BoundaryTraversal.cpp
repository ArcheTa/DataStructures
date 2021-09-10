class Solution {
public:
     
    bool isleaf(Node* root){
        if(root->left == NULL && root->right == NULL) return true;
        return false;
    } 
    
    void LeftBoundary(Node* root, vector<int> &res){
        Node* curr = root ->left;
        while(curr){
            if(!isleaf(curr)) res.push_back(curr->data);
            if(curr -> left) curr = curr ->left;
            else curr = curr ->right;
        }
    }
    
    void RightBoundary(Node* root, vector<int> &res){
        Node* curr = root -> right;
        vector<int> temp;
        while(curr){
            if(!isleaf(curr)) temp.push_back(curr->data);
            if(curr->right) curr = curr -> right;
            else curr = curr ->left;
        }
        for(int i = temp.size() - 1; i >= 0; --i){
            res.push_back(temp[i]);
        }
    }
    
    void AddLeaves(Node* root, vector<int> &res){
        if(isleaf(root)){ 
            res.push_back(root->data);
            return;
        }
        if(root->left) AddLeaves(root->left, res);
        if(root->right)AddLeaves(root->right, res);
    }
    vector <int> printBoundary(Node *root)
    {
        //Your code here
        vector<int> res;
        if(!root) return res;
        if(!isleaf(root)) res.push_back(root->data);
        LeftBoundary(root, res);
        AddLeaves(root, res);
        RightBoundary(root, res);
        return res;
    }
};