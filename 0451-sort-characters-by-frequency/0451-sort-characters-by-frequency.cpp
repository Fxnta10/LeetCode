class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }

        vector<pair<int,char>>frequencyVector;
        for(auto &kv : mp){
            frequencyVector.push_back({kv.second,kv.first});
        }
        sort(frequencyVector.rbegin(),frequencyVector.rend());
        string ans;
        for(auto &p:frequencyVector){
            ans+=string(p.first,p.second);
        }

        return ans;
    }
};