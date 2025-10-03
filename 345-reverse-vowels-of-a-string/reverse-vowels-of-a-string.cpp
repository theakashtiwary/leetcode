class Solution {
public:
    // Function to check if a character is a vowel
    bool isVowel(char ch) {
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
               ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
    }

    string reverseVowels(string s) {
        int st = 0;
        int end = s.length() - 1;

        while (st < end) {
            while (st < end && !isVowel(s[st])) st++;   // move start to vowel
            while (st < end && !isVowel(s[end])) end--; // move end to vowel

            if (st < end) {
                swap(s[st], s[end]); // swap vowels
                st++;
                end--;
            }
        }

        return s;
    }
};
