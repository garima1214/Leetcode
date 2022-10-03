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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<double>ans;
        while(q.size())
        {  double row=0;
            double qlen =q.size();
            for(int i=0;i<qlen;i++)
            {
                TreeNode * cur =q.front();
                q.pop();
                row+=cur->val;
               if(cur->right) q.push(cur->right);
                if(cur->left) q.push(cur->left);
            }
         ans.push_back(row/qlen);
        }
        return ans;
    }
};