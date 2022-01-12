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
class Solution {
private:
    TreeNode* insert(TreeNode*root,int value){
        //Base case : where node will be inserted
        if(root==NULL){
            TreeNode* newNode = new TreeNode(value);
            return newNode;
        }
        if(root->val < value){
            root->right = insert(root->right,value);
        }
        else{
            root->left = insert(root->left,value);
        }
        return root;
    }
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* ans = insert(root,val);
        return ans;
    }
};