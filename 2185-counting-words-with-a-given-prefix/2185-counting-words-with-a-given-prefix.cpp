class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            bool c = true; 
            for (int j = 0; j < pref.size(); j++) {
                if (j >= s.size() || s[j] != pref[j]) {
                    c = false;
                    break;
                }
            }
            
            if (c) {
                count++;
            }
        }
        return count;
    }
};
