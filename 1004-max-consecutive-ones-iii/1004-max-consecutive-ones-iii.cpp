class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, zeroCount = 0, maxlen = 0;
        
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                zeroCount++;
            }
            // shrink window if zero count exceeds k
            while (zeroCount > k) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};