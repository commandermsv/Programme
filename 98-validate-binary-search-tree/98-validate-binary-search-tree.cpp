class Solution {
public:
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        return inorder(root, prev);
    }
private:
    bool inorder(TreeNode* root, TreeNode*& prev) {
        if (root == NULL) {
            return true;
        }
        
        if (!inorder(root->left, prev)) {
            return false;
        }
        
        if (prev != NULL && prev->val >= root->val) {
            return false;
        }
        prev = root;
        
        if (!inorder(root->right, prev)) {
            return false;
        }
        
        return true;
    }
};

// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         stack<TreeNode*> stk;
//         TreeNode* prev = NULL;
        
//         while (!stk.empty() || root != NULL) {
//             while (root != NULL) {
//                 stk.push(root);
//                 root = root->left;
//             }
//             root = stk.top();
//             stk.pop();
            
//             if (prev != NULL && prev->val >= root->val) {
//                 return false;
//             }
            
//             prev = root;
//             root = root->right;
//         }
        
//         return true;
//     }
// };