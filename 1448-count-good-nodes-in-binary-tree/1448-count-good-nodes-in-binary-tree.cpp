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
     int result(TreeNode* root, int m){
         if(root==NULL) return 0;
         int res=root->val<m? 0:1;
         m=max(m,root->val);
         return res+result(root->left,m)+result(root->right,m);
     }
    
    int goodNodes(TreeNode* root) {
        return result(root,INT_MIN);
        
    }
};