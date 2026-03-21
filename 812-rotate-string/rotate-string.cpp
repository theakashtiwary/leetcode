class Solution {
public:
    bool rotateString(string s, string goal) {
        string rotate;
        rotate=s+s;
             if (s.size() != goal.size()) return false;

        if (rotate.find(goal) != string::npos){
            return true;
        }
        return false;
    }
};