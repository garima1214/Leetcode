/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private :
    vector<int>p;
    public:
    vector<int> preorder(Node* root) {
        ans(root);
        return p;
    }
    
    void ans(Node * root)
    {
        
        if(root==nullptr)
            return ;
         
                p.push_back(root->val);
        for(int i=0;i<root->children.size();i++)
        {
                ans (root->children[i]);
        }
    
    }
};