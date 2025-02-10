class Solution {
public:
    void rotate(vector<int>& v, int k) {
        k=k%v.size();
        int n=v.size();
        reverse(v.begin(),v.begin()+n-k);
        reverse(v.begin()+n-k,v.end());
        reverse(v.begin(),v.end());
    }
};