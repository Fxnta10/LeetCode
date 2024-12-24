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
        for(auto it:count){
            if(it.second<0){
                sum=sum+(it.second*-1);
            }else{
                sum+=it.second;
            }
        }
        return sum;
    }
};