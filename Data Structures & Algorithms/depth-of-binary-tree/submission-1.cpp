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
    int maxDepth(TreeNode* root) {
        stack<pair<TreeNode*,int>>st;
        int res=0;
        st.push({root,1});
        while(!st.empty()){
            auto curr=st.top();
            st.pop();
            TreeNode* node=curr.first;
            int depth=curr.second;
            if(node!=NULL){
                res=max(depth,res);
                st.push({node->left,depth+1});
                st.push({node->right,depth+1});
            }
        }
        return res;
    }
};
