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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>ans;
        TreeNode* node=root;
        while(node || !st.empty()){
            if(node){
                st.push(node);
                ans.push_back(node->val);
                node=node->right;
            }
            else{
                node=st.top();
                st.pop();
                node=node->left;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};