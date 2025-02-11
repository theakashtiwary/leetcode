class Solution {
public:
    string removeOccurrences(string s, string part) {
        // Continuously search for the substring part in s
        while (s.find(part) != string::npos) {
            // Find the first occurrence of part
            size_t pos = s.find(part);
            // Erase the part from the string
            s.erase(pos, part.length());
        }
        return s;
    }
};
