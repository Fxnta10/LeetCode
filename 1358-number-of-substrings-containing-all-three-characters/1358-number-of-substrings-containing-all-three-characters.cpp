class Solution {
public:
    int numberOfSubstrings(string s) {
        //find the where u can find abc from the start 
        //add all the subarrays u can get by increasing the right value 
        //now contract the left pointer till a point where u cant find abc in that array
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