class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        
        unordered_map<char, int> mp;
        int left = 0;
        int max_length = 0;
        
        for (int right = 0; right < s.size(); ++right) {
            char currentChar = s[right];
            if (mp.find(currentChar) != mp.end() && mp[currentChar] >= left) {
                left = mp[currentChar] + 1;
            }
            mp[currentChar] = right;
            max_length = max(max_length, right - left + 1);
        }
        return max_length;
    }
};
