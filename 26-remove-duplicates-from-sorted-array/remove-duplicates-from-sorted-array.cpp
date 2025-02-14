class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Use set to store unique elements
        set<int> s(nums.begin(), nums.end());
        
        // Directly assign set elements back to nums vector
        nums.assign(s.begin(), s.end());
        
        // Return the number of unique elements
        return nums.size();
    }
};
