class Solution {
public:

    void helper_function(TreeNode* root, vector<int> &res_vec){
        if(root != nullptr){
            res_vec.push_back(root->val);
            helper_function(root->left, res_vec);
            helper_function(root->right, res_vec);
        }
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res_vec;
        helper_function(root, res_vec);
        return res_vec;
    }
};