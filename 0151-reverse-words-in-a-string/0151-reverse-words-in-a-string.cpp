class Solution {
public:
    string reverseWords(string s) {
        int l = s.length();
        string temp;
        vector<string> order;
        for (int i = 0; i < l; i++) {
            if (s[i] == ' ') {
                if (!temp.empty()) {
                    order.push_back(temp);
                    temp = "";
                }
            } else {
                temp += s[i];
            }
        }
        if (!temp.empty()) {
            order.push_back(temp);
        }
        string ans;
        for (int i = order.size() - 1; i >= 0; i--) {
            if (!ans.empty()) {
                ans += " ";
            }
            ans += order[i];
        }
        
        return ans;
    }
};