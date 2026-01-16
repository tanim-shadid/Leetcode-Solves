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
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>>v;
        if (root==NULL)return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>level;
            for(int i=0;i<n;i++)
            {
                 TreeNode*tem=q.front();
                 q.pop();
                 level.push_back(tem->val);
                 if(tem->left)q.push(tem->left);
                 if(tem->right)q.push(tem->right);

            }
            v.push_back(level);

        }
        return v;

    }
};
