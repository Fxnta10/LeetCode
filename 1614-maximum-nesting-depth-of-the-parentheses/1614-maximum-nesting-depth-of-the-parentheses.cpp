class Solution {
public:
    int maxDepth(string s) {
        int maxdepth = 0;
        int currentdepth = 0;

        for (auto c : s) {
            if (c == '(') {
                currentdepth++;
                maxdepth = max(maxdepth, currentdepth);
            } else if (c == ')') {
                currentdepth--;
            }
        }
        return maxdepth;
    }
};
