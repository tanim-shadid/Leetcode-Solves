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
TreeNode*dfs(int &i,int l,int h,vector<int>&preorder,unordered_map<int,int>&mp)
{
    if(l>h) return NULL;
    int id=mp[preorder[i]];
    if(id<l || id>h) return NULL;
    TreeNode*root=new TreeNode(preorder[i]);
    i++;
    root->left=dfs(i,l,id-1,preorder,mp);
    root->right=dfs(i,id+1,h,preorder,mp);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) mp[inorder[i]]=i;
        int i=0;
        return dfs(i,0,n-1,preorder,mp);
    }
};
