class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Use unordered_set to store the elements of the vector for fast lookups.
        unordered_set<int> numSet(nums.begin(), nums.end());

        int longestStreak = 0;

        // Loop through each element in the set.
        for (int num : numSet) {
            // If the previous number is not in the set, it means 'num' can start a new sequence.
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // Increment the number and check if the next number exists in the set.
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    currentStreak++;
                }

                // Update the longest streak if the current streak is longer.
                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};
