class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int max_length = 0;
        unordered_map<char, int> mp;
        int max_freq_char_count = 0;
        for (int right = 0; right < s.size(); ++right) {
            mp[s[right]]++;
            max_freq_char_count = max(max_freq_char_count, mp[s[right]]);
            if ((right - left + 1 - max_freq_char_count) > k) {
                mp[s[left]]--;
                left++;
            }
            max_length = max(max_length, right - left + 1);
        }
        return max_length;
    }
};
