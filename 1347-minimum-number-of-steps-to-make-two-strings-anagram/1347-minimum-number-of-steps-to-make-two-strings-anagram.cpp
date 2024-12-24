class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>count;
        for(auto ch:s){
            count[ch]++;
        }
        for(auto ch:t){
            count[ch]--;
        }
        int sum=0;
        //summing elements left in the map;
        for(auto it:count){
            // cout<<it.first<<endl;
            // cout<<it.second<<endl;
            if(it.second>0){
                sum+=it.second;
            }
        }
        return sum;
    }
};