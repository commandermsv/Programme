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
      int k=0;
    bool sametree(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        if(p->val != q->val) return false;
        return(sametree(p->left,q->left) && sametree(p->right,q->right));
    }
  
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return true;
        
        if(root->val==subRoot->val){
            if(sametree(root,subRoot)){
                k=1;
                return true;
            }
                
            }
      
            isSubtree(root->left,subRoot);
            isSubtree(root->right,subRoot);
        if(k==1) return true;
        else return false;
    }
    
};