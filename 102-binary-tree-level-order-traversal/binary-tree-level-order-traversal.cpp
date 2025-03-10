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
        vector<vector<int>>ans;
         if (root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>d;
            for(int i=0;i<size;i++){
                 
            TreeNode* node=q.front();
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL)q.push(node->right);

            d.push_back(node->val);
            q.pop();
            }

            ans.push_back(d);



        }


        return ans;

    }
};