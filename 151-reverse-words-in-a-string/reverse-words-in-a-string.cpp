class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        
        string ans = "";
        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            if (s[i]== ' ') {
                 continue;
                i++;
            }
            string word = "";
        
        while (i < n && s[i] != ' ') {
            word = word + s[i];
            i++;
        }
        reverse(word.begin(), word.end());
           if (!ans.empty()) ans=ans+" "; 
        ans = ans + word;
    }
    return ans;
}

};