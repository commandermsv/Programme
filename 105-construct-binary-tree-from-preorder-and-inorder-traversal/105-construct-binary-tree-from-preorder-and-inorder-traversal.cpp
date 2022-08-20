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
    unordered_map<int,int> h;
    int preIndex=0,start=0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int end=inorder.size()-1;
        for(int i=0;i<=end;i++){
            h.insert({inorder[i],i});
        }
        
        return helper(preorder,inorder, 0,end);
    }
    TreeNode* helper(vector<int>& preorder,vector<int>& inorder,int start,int end){
        if(start>end) return NULL;
        TreeNode* root=new TreeNode(preorder[preIndex++]);
        if(root==NULL) return NULL;
        if(start==end) return root;
        if(start<end){
         int index=h.at(root->val);
            root->left=helper(preorder,inorder, start,index-1);
            root->right=helper(preorder,inorder,index+1,end);
            
        }
        return root;
    }
};