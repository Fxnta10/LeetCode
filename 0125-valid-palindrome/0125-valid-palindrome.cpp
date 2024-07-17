
class Solution {
public:
    bool isPalindrome(string s) {
        string cleanString;
        for (char c : s) {
            if ((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z') ||(c >= '0' && c <= '9')) {
                cleanString += tolower(c);
            }
        }

        int left = 0;
        int right = cleanString.size() - 1;
        while (left <= right) {
            if (cleanString[left] != cleanString[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
