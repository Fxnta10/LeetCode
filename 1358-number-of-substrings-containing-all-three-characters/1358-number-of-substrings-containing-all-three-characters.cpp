class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mp;
        int left=0;
        int ans=0;
        for(int right=0;right<s.size();right++){
            mp[s[right]]++;
            while(mp['a']>0 && mp['b']>0 && mp['c']>0){
                ans+=s.size()-right;
                mp[s[left]]--;
                left++;
            }
        }
        return ans;
    }
};