class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0;
        int maxlen=0;
        unordered_map<char,int>mp;
        while(right<s.size()){
            
            if(mp.count(s[right])>0 && mp[s[right]] > 0){
                // loop till condition is satisfied
                mp[s[left]]--;
                left++;
            }else{
                mp[s[right]]++;
                maxlen=max(maxlen,right-left+1);
                right++;
            }

        }
        return maxlen;
    }
};