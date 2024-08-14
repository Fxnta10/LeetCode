class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        unordered_map<int, int> mp;
        int longest = 0;

        for (int num : nums) {
            mp[num]++;
        }

        for (int num : nums) {
            if (mp.find(num - 1) == mp.end()) {
                int length = 0;
                while (mp.find(num + length) != mp.end()) {
                    length++;
                }
                longest = max(longest, length);
            }
        }

        return longest;
    }
};