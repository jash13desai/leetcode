// brute force approach :
class Solution {
public:
    void rotate(vector<vector<int>>&v){
        int n=v.size();
        vector<vector<int>> t=v;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                t[j][n-i-1] = v[i][j];
            }
        }
        v=t;
    }
};