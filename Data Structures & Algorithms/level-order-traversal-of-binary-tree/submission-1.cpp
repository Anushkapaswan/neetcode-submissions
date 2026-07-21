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

// dfs

class Solution {
public:
vector<vector<int>>ans;

void dfs(TreeNode* root,int depth){
    if(root ==NULL) return;
    if(ans.size()==depth){
        ans.push_back(vector<int>());
    }
    ans[depth].push_back(root->val);
    if(root->left) dfs(root->left,depth+1);
    if(root->right) dfs(root->right,depth+1);
    return;
}
    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};
