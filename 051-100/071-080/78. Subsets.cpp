class Solution {
public:
    void rec(vector<int>&v, vector<vector<int>>&a, vector<int>&t, int idx){
        a.push_back(t);
        if(idx==v.size()) return;
        for(int i=idx; i<v.size(); i++){
            t.push_back(v[i]);
            rec(v,a,t,i+1);
            t.erase(t.end()-1);
        }
    }
    
    vector<vector<int>> subsets(vector<int>&v) {
        vector<vector<int>> a;
        vector<int> t;
        if(v.size()) sort(v.begin(), v.end());
        rec(v,a,t,0);
        return a;
    }
};