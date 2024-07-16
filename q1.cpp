#include <vector>           // for vector
#include <unordered_map>    // for unordered_map
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int complement = target - temp;
            auto it = mp.find(complement);
            if (it != mp.end() && it->second != i) { 
                ans.push_back(i);
                ans.push_back(it->second);
                return ans;
            }
        }

        return ans; 
    }
};
