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
public:
    //Inorder Traversal and mark the node whose value need to swap
    TreeNode*curr,*temp,*prev;
    void swapNode(TreeNode* root) {
        //Base case : 
        if(root==NULL){
            return;
        }
    
        swapNode(root->left);
        if(temp==NULL and prev->val>root->val){
            temp=prev;
        }
        if(temp!=NULL and prev->val>root->val){
            curr=root;
        }    
        prev=root;
        swapNode(root->right);

    }
    void recoverTree(TreeNode*root){
        curr=NULL;
        temp=NULL;
        prev=new TreeNode(INT_MIN);
        swapNode(root);
        swap(temp->val,curr->val);
    }
};