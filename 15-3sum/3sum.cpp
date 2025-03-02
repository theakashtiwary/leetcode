class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int target = 0;
        
        sort(nums.begin(), nums.end());  // Sort the array
        
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate elements for `i`
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int l = i + 1;
            int r = n - 1;
            
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                
                if (sum == target) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    
                    // Move the left pointer and skip duplicates
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    // Move the right pointer and skip duplicates
                    while (l < r && nums[r] == nums[r - 1]) r--;
                    
                    // Move both pointers after processing
                    l++;
                    r--;
                } 
                else if (sum < target) {
                    l++;  // Move left pointer to increase the sum
                } 
                else {
                    r--;  // Move right pointer to decrease the sum
                }
            }
        }
        
        return ans;
    }
};
