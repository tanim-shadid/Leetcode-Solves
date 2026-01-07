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
    int goodNodes(TreeNode* root) {
       int ans=dfs(root,root->val);
        return ans;

    }
    private:
      int dfs(TreeNode* node,int maxi)
      {
        if(node==NULL)return 0;
        int res=0;
        if(node->val>=maxi)res=1;
        maxi=max(maxi,node->val);
        res+=dfs(node->left,maxi);
        res+=dfs(node->right,maxi);
        return res;
      }
};
