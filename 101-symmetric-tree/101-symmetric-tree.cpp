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
    bool isSymmetry(TreeNode*Left,TreeNode*Right){
        if(Left==NULL or Right==NULL){
            return Left==Right;
        }
        
        if(Left->val!=Right->val){
            return false;
        }
        
        return isSymmetry(Left->left,Right->right) 
            && isSymmetry(Left->right,Right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        return isSymmetry(root->left,root->right);
    }
};