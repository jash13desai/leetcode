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
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        vector<int> ans;
        queue<TreeNode*> q; q.push(root);
        while(q.size()){
            int n = q.size();
            int k = INT_MIN;
            while(n--){
                auto x = q.front(); q.pop();
                k = max(k, x->val);
                if(x->left) q.push(x->left);
                if(x->right) q.push(x->right);
            }
            ans.push_back(k);
        }
        return ans;
    }
};