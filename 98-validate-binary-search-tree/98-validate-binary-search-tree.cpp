class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return i(root,NULL,NULL);
    }
    bool i(TreeNode* root,TreeNode*  min,TreeNode* max){
       if(root==NULL) return true;
        if(min!=NULL && root->val<=min->val) return false;
        if(max!=NULL && root->val>=max->val) return false;
        bool leftvalid=i(root->left,min,root);
        bool rightvalid=i(root->right,root,max);
        return leftvalid && rightvalid;;
    }
};