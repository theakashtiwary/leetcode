class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int end = s.size() - 1;

        while (st < end) {

            // skip non-alphanumeric
            if (!isalnum(s[st])) {
                st++;
                continue;
            }
            if (!isalnum(s[end])) {
                end--;
                continue;
            }

            // compare lowercase
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            st++;
            end--;
        }

        return true;
    }
};