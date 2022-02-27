/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    bool storePath(TreeNode*node,vector<TreeNode*>&path,TreeNode*target){
        if(!node){
            return false;
        }
        path.push_back(node);
        if(node->val==target->val){
            return true;
        }
        if(storePath(node->left,path,target)|| storePath(node->right,path,target)){
            return true;
        }
        path.pop_back();
        return false;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>path1;
        vector<TreeNode*>path2;
        storePath(root,path1,p);
        storePath(root,path2,q);
        int size = min(path1.size(),path2.size());
        int i=0;
        TreeNode* ans;
        while(i<size){
            if(path1[i]->val==path2[i]->val){
                ans = path1[i];            
            }
            i+=1;
        }
        return ans;
    }
};