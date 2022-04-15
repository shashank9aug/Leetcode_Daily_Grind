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
    int hleft(TreeNode*temp){
        int h = 0;
        while(temp){
            h++;
            temp = temp->left;
        }
        return h;
    }
    int hright(TreeNode*temp){
        int h = 0;
        while(temp){
            h++;
            temp = temp->right;
        }
        return h;
    }
public:
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int lh = hleft(root);
        int rh = hright(root);
        
        if(lh==rh){
            return (1<<lh) - 1;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};