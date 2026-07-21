/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){}
 * };
 */

class Solution {
    bool exists(TreeNode* root,TreeNode* target){
        if(root==NULL) return false;
        if(root==target) return true;
        return exists(root->left,target) || exists(root->right,target);
    }
public:
    // {}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL) return NULL;
        if(root==p || root==q) return root;
        if(exists(root->left,p) && exists(root->right,q)) return root;
        else if(exists(root->right,p) && exists(root->left,q)) return root;
        else if(exists(root->left,p) && exists(root->left,q)) return lowestCommonAncestor(root->left,p,q);
        else return lowestCommonAncestor(root->right,p,q);
    }
}; 
