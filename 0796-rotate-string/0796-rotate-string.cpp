class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        if (n != goal.length()) {
            return false;
        }
        for (int i = 0; i < n; i++) {
            if (s == goal) {
                return true;
            }
            char temp = s[0];
            s.erase(s.begin());
            s += temp;
        }
        return false;
    }
};

