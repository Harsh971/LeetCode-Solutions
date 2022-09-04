class Solution {
public:
    vector<int> preorder(Node* root) 
	{
        vector<int> ans;
        if (root) pre(root, &ans);
        return ans;
    }
    void pre(Node* node, vector<int>* ans) 
	{
        ans->push_back(node->val);
        for (Node* child : node->children)
            pre(child, ans);
    }
};