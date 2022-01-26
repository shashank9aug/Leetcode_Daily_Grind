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
    void helper(TreeNode*root,vector<int>&ans){
        //Base case:
        if(root==NULL){
            return;
        }
        
        if(root->left!=NULL){
            ans.push_back(root->left->val);
            helper(root->left,ans);    
        }
        if(root->right!=NULL){
            ans.push_back(root->right->val);
            helper(root->right,ans);
        }
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        if(root1!=NULL){
            ans.push_back(root1->val);        
        }
        helper(root1,ans);
        if(root2!=NULL){
            ans.push_back(root2->val);        
        }
        helper(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};