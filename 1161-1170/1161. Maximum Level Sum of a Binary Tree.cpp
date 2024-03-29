class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int maxSum = INT_MIN; queue<TreeNode*> q; 
        q.push(root); int lvl = 1, ans = -1;
        while(!q.empty()){
            int sz = q.size(); int currSum = 0;
            for(int i=0; i<sz; i++){
                TreeNode* curr = q.front(); q.pop();
                currSum += curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            if(currSum > maxSum){
                ans = lvl;
                maxSum = currSum;
            }
            lvl++;
        }
        return ans;
    }
};