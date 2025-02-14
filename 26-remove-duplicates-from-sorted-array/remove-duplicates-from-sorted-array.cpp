class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int> s(nums.begin(), nums.end());
        
        
        // nums.assign(s.begin(), s.end());
        nums={};
        for(auto i:s){
            nums.push_back(i);
        }
        
        return nums.size();
    }
};
