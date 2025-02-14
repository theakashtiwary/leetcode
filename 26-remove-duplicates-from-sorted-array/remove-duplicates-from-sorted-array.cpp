class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
        set<int> s(nums.begin(), nums.end());


        int index = 0;
        for (auto a : s) {
            nums[index] = a;
            index++;
        }

        
        return s.size();
    }
};
