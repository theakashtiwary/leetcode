class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";

        reverse(s.begin(), s.end());

        for(int i = 0; i < n; ) {
            if(s[i] == ' ') {
                i++;
                continue;
            }

            string word = "";
            while(i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());

            if(!ans.empty()) ans += " "; // add space only if ans is not empty
            ans += word;
        }

        return ans;
    }
};
