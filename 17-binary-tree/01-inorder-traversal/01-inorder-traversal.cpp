// recursive implementation
// ------------------------
void helper_function(TreeNode* root, vector<int> &res_vec){
    if(root != nullptr){
        helper_function(root->left, res_vec);
        res_vec.push_back(root->val);
        helper_function(root->right, res_vec);
    }
}
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> res_vec;
    helper_function(root, res_vec);
    return res_vec;
}

