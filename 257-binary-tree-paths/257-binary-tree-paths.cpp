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
    vector<string> p;
    void dfs(TreeNode * root,string s)
    {
        if(root==NULL)
            return;
        if(root->left==NULL and root->right==NULL)
            p.push_back(s+to_string(root->val));
        
        dfs(root->left,s+to_string(root->val)+"->");
            dfs(root->right,s+to_string(root->val)+"->");
    }
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
       dfs(root,"");
        return p;
    }
};