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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        // int count=1;
        // bool flag=false;
        bool flag = true;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>sub(n);
            for(int i=0;i<n;i++){
                TreeNode*f=q.front();
                // sub[i]=f->val;
                q.pop();
                int index = (flag) ? i : (n-1-i);
                sub[index] = f->val; 
                if(f->left){
                    q.push(f->left);
                }
                if(f->right){
                    q.push(f->right);
                }
            }
            // if(flag){
                // reverse(sub.begin(),sub.end());
            // }
            ans.push_back(sub);
            flag=!flag;
        }
        return ans;
        
    }
};