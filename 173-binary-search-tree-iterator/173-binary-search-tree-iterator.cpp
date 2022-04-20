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
class BSTIterator {
public:
    stack<TreeNode*>st;
    BSTIterator(TreeNode* root) {
        fill(root);
    }
    
    int next() {
        TreeNode*rem = st.top();
        st.pop();
        if(rem->right!=NULL)
            fill(rem->right);
        return rem->val;
    }
    
    bool hasNext() {
        return st.empty() ? false : true;
    }
    
    void fill(TreeNode*node){
        TreeNode* p = node;
        while(p!=NULL){
            st.push(p);
            p=p->left;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */