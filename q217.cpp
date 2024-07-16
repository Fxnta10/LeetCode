#include <vector>           // for vector
#include <unordered_map>    // for unordered_map
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> countMap;
        
        for (int i = 0; i < nums.size(); i++) {
            countMap[nums[i]]++;
            if (countMap[nums[i]] > 1) {
                return true;
            }
        }
        
        return false;
    }
};
