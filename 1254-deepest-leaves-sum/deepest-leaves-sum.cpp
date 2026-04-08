/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    pair<int, int> solve(TreeNode* root) {
        if (!root) return {-1, 0};

        if (!root->left && !root->right) {
            return {0, root->val};
        }
        auto left = solve(root->left);
        auto right = solve(root->right);
        if (left.first > right.first) {
            return {left.first + 1, left.second};
        } else if (right.first > left.first) {
            return {right.first + 1, right.second};
        } else {
            return {left.first + 1, left.second + right.second};
        }
    }
    int deepestLeavesSum(TreeNode* root) { 
      return solve(root).second;
    }
};