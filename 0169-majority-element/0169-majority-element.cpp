#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int num : nums) {
            mp[num]++;
        }
        for(const auto& pair : mp) {
            if(pair.second > n / 2) {
                return pair.first;
            }
        }
        return -1;
    }
};
