class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        
        int max_length = 0;
        int zeros = 0;
        int left = 0;
        
        for (int right = 0; right < n; ++right) {
            if (nums[right] == 0) {
                zeros++;
            }
            
            while (zeros > k) {
                if (nums[left] == 0) {
                    zeros--;
                }
                left++;
            }
            
            max_length = max(max_length, right - left + 1);
        }
        
        return max_length;
    }
};
