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
    void find(TreeNode* root,int& targetSum,vector<vector<int>>&ans,int target,vector<int>&temp){
        if(root==NULL) return;
        target+=root->val;
        temp.push_back(root->val);
        if(!root->left && !root->right && target==targetSum){
            ans.push_back({temp});
        }
        find(root->left,targetSum,ans,target,temp);
        find(root->right,targetSum,ans,target,temp);
        target-=root->val;
        temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>temp;
        find(root,targetSum,ans,0,temp);
        return ans;
    }
};