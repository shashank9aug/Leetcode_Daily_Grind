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
    void helper(int prev,TreeNode*root,int &ans){
        //base case :
        if(root==NULL){
            return;
        }
        int curr = (prev<<1) + (root->val);
        //if node is leaf :
        if(root->left==NULL and root->right==NULL){
            ans += curr;
            return;
        }
        
        //small ip
        helper(curr,root->left,ans);
        helper(curr,root->right,ans);
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0;
        int prev = 0;
        helper(prev,root, ans);
        return ans;
    }
};