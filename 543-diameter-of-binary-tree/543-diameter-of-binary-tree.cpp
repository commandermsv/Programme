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
    int ans=0;
    int diameterOfBinaryTree(TreeNode* root) {
        getdia(root);
        return ans==0?0:ans-1;
    }
    int getdia(TreeNode* root){
        if(root==NULL) return 0;
        int l=getdia(root->left);
        int r=getdia(root->right);
        ans=max(ans,(l+r+1));
        return max(l,r)+1;
    }
};