class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Use set to store unique elements
        set<int> s(nums.begin(), nums.end());

        // Copy elements from set back to nums array in-place
        int index = 0;
        for (auto a : s) {
            nums[index++] = a;
        }

        // Return the number of unique elements, i.e., size of the set
        return s.size();
    }
};
