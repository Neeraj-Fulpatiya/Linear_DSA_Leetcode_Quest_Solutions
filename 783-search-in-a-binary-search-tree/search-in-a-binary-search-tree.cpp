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
TreeNode* ans(TreeNode* root ,int x){
    if(!root)return NULL;
    if(root->val==x)return root;
    else if(root->val<x)
    return ans(root->right,x);
    else return ans(root->left,x);
    return nullptr;
}
    TreeNode* searchBST(TreeNode* root, int val) {
        return ans(root,val);
    }
};