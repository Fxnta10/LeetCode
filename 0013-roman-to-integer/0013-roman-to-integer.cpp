class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        unordered_map<char,int>valueMap;
        valueMap['I']=1;
        valueMap['V']=5;
        valueMap['X']=10;
        valueMap['L']=50;
        valueMap['C']=100;
        valueMap['D']=500;
        valueMap['M']=1000;
        for(int i=0;i<s.length();i++){
            int v1=valueMap[s[i]];
            if (i + 1 < s.length()) {
            int v2 = valueMap[s[i + 1]];
            if (v1 >= v2) {
                res += v1;
            }
            else {
                res += (v2 - v1);
                i++;
            }
        }
        else {
            res += v1;
        }
        }
        return res;
    }
};