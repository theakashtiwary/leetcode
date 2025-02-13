class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int maxLength = 0;
        int i = 0;  // Left pointer
        
        for (int j = 0; j < s.size(); j++) {
            // If the character is already in the set, shrink the window
            while (set.find(s[j]) != set.end()) {
                set.erase(s[i]);
                i++;
            }
            // Add the current character to the set and update the maximum length
            set.insert(s[j]);
            maxLength = max(maxLength, j - i + 1);
        }
        return maxLength;
    }
};
