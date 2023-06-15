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
    int maxLevelSum(TreeNode* root) {
        int maxSum = INT_MIN; queue<TreeNode*> nxtLvl;
        queue<TreeNode*> q; q.push(root); 
        int lvl = 1, ans = -1;
        while(!q.empty()){
            int sz = q.size(); int currSum = 0;
            for(int i=0; !q.empty() and i<sz; i++){
                TreeNode* curr = q.front(); q.pop();
                currSum += curr->val;
                if(curr->left) nxtLvl.push(curr->left);
                if(curr->right) nxtLvl.push(curr->right);
            }
            if(q.empty()){
                swap(q, nxtLvl);
                if(currSum > maxSum){
                    ans = lvl;
                    maxSum = currSum;
                }
            }
            lvl++;
        }
        return ans;
    }
};