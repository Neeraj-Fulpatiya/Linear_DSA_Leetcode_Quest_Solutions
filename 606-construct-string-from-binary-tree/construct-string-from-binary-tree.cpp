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
    string tree2str(TreeNode* root) {
        if(!root) return "";
        string ans = "";
        helper(root,false,ans);
        return ans;
    }
    void helper(TreeNode* root,bool x,string& ans)
    {
         if(!root) return;
         if(x) ans += "(";
         ans += to_string(root->val);
         if(!root->left && root -> right)
         ans += "()";
         helper(root->left,true,ans);
         helper(root->right,true,ans);
        //if(!(root->left&&root->right)) 
          if(x)  ans += ")";
    }
};