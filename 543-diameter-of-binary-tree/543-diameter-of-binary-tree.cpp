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
    int height(TreeNode*root,int &dia){
        //Base case:
        if(root==NULL){
            return 0;
        }
        int lh = height(root->left,dia);
        int rh = height(root->right,dia);
        dia = max(dia,lh+rh);
        return 1 + max(lh,rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int dia = 0;
        int val = height(root,dia);
        return dia;
    }
};