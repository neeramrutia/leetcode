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
    vector<vector<int>> ans;
    vector<int> path;
    void solve(TreeNode* root,int current , int targetsum)
    {
        if(!root)
        {
            return;
        }
        
        current=current+root->val;
        path.push_back(root->val);
        
        
        if(current==targetsum && root->left==NULL && root->right==NULL)
            ans.push_back(path);
        
        solve(root->left,current,targetsum);
        solve(root->right,current,targetsum);
        
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        solve(root,0,targetSum);
        
        return ans;
    }
};