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
   int r=0;
    int count(TreeNode* root){
        if(root==NULL) return NULL;
        return 1+count(root->left)+count(root->right);
    }
    
    int check(TreeNode* root, int m){
        if(root==NULL) return 0;
        m=max(m,root->val);
        if(root->val<m){
            r++;
            
        }
        check(root->left,m);
        check(root->right,m);
        return r;
    }
    
    int goodNodes(TreeNode* root) {
        int c=count(root);
        r=check(root,INT_MIN);
        return c-r;
        
    }
};