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
// to find the min from the rightside 
TreeNode* findmin(TreeNode* root){
    while(root->left){
        root=root->left;
    }
    return root;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key){

            // if both children are null
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            // any one of the children is null
            else if(root->left==NULL || root->right==NULL){
                if(root->left==NULL){
                    TreeNode* temp=root->right;
                    delete root;
                    return temp;
                }
                
                else{
                    TreeNode* temp=root->left;
                    delete root;
                    return temp;
                }
            }
            // both children are present;
            else{
                // find successor
                TreeNode* successor=findmin(root->right);
                root->val=successor->val;
                root->right=deleteNode(root->right,successor->val);
                }
            }
        if(key<root->val){
            root->left=deleteNode(root->left,key);
        }
        else root->right=deleteNode(root->right,key);

        return root;
        
    }
};