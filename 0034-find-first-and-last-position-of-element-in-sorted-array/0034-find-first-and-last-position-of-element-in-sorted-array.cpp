class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int low = 0;
        int high = nums.size() - 1;

        //finding the first occurrence
        int first_occ = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                first_occ = mid;
                high = mid - 1; 
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        
        if (first_occ == -1) {
            return ans;
        }

        //finding the last occurrence
        low = 0;
        high = nums.size() - 1;
        int last_occ = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                last_occ = mid;
                low = mid + 1;  // Move right to find the last occurrence
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        ans[0] = first_occ;
        ans[1] = last_occ;
        return ans;
    }
};
