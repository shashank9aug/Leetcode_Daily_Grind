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
    int maxPath(TreeNode*node,int &maxi){
        //Base case : for every node
        if(node==NULL){
            return 0;
        }
        
        //for every node maxleft,maxright
        int ls = max(0,maxPath(node->left,maxi));
        int rs = max(0,maxPath(node->right,maxi));
        
        //maintain maximum path 
        maxi = max(maxi , ls+rs+node->val);
        
        return max(ls,rs) + node->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        int ans = maxPath(root,maxi);
        return maxi;
    }
};