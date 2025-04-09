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
    void s(vector<int> &res , TreeNode* root)
    {
        if(root== NULL)   return;
        res.push_back(root->val);
        s(res, root->left);
        s(res, root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        s(res, root);
        return res;        
    }
};