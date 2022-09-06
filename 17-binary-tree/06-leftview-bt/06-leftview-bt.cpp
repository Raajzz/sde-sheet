// My Version - Basically perform a BFS or level-order traversal and then take the first or the last element.

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> res;
    queue<TreeNode<int>*> bfs_queue;
    bfs_queue.push(root);
    int len_queue = bfs_queue.size();
    res.push_back(root->data);
    while(!bfs_queue.empty()){
        TreeNode<int>* ptr = bfs_queue.front(); 
        bfs_queue.pop();
        len_queue--;
        if(ptr->left != nullptr){
            bfs_queue.push(ptr->left);
        }
        if(ptr->right != nullptr){
            bfs_queue.push(ptr->right);
        }
        if(len_queue == 0){
            res.push_back(bfs_queue.front()->data);
            len_queue = bfs_queue.size();
        }
    }
    return res;
}

// After looking at the editorial.

void pre_trav(TreeNode<int> *root, vector<int> &res, int level){
    if(root != nullptr){
        if(level == res.size()){
            res.push_back(root->data);
        }
        pre_trav(root->left, res, level + 1);
        pre_trav(root->right, res, level + 1);
    }
}

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> res;
    pre_trav(root, res, 0);
    return res;
}