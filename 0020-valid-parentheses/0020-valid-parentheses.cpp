#include <stack>
#include <string>

class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                t.push(s[i]);
            } else {
                if (t.empty()) return false; 
                char top = t.top();
                if ((top == '(' && s[i] == ')') ||
                    (top == '[' && s[i] == ']') ||
                    (top == '{' && s[i] == '}')) {
                    t.pop();
                } else {
                    return false; 
                }
            }
        }
        return t.empty(); 
    }
};
