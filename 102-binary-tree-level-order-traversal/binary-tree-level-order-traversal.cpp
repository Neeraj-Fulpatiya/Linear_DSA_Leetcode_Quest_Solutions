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
        queue<TreeNode*>q;
        vector<vector<int>>ans;

        if(root==NULL)return{};
        q.push(root);

        while(!q.empty()){
           int n= q.size();
           vector<int>res;
for(int i=0;i<n;i++){
            TreeNode* node=q.front();
            q.pop();
            if(node->left!=NULL)q.push(node->left);
            if(node->right!=NULL)q.push(node->right);
            res.push_back(node->val);

        }
        ans.push_back(res);
        }
  return ans;
    }
};