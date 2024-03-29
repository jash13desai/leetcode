// class Solution {
// public:
//     int maxProfit(vector<int>&v) {
//         int n=v.size();
//         vector<int> idc(n);
//         idc[n-1]=v[n-1];
//         for(int i=n-2; i>=0; i--){
//             idc[i]=max(idc[i+1],v[i]);
//         }
//         int a=0;
//         for(int i=0; i<n; i++){
//             a = max(a,idc[i]-v[i]);
//         }
//         return a>0 ? a : 0;
//     }
// };
// optimized for space :
class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n=v.size();
        int a = 0;
        int c=v[n-1];
        for(int i=n-2; i>-1; i--){
            c = max(c,v[i]);
            a = max(a,c-v[i]);
        }
        return a;
    }
};