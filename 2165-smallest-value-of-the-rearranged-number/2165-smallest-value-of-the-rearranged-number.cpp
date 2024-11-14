class Solution {
public:
    long long smallestNumber(long long num) {
        long long answer=0;
        bool isNegative = num < 0;
        if (isNegative) {
            num = -num;
        }
        vector<int>t;
        while(num!=0){
            t.push_back(num % 10);
            num = num / 10;
        }
        if(isNegative){
            sort(t.begin(),t.end(),greater<int>());
        }else{
            sort(t.begin(),t.end());
        }
        //swapping so that the number doesnt start with zero
        for(int i=0;i<t.size();i++){
            if(t[i]!=0){
                swap(t[0],t[i]);
                break;
            }
        }

        for(int i=0;i<t.size();i++){
            answer=answer*10+t[i];
        }
        if (isNegative) {
            answer = -answer;
        }
        return answer;
    }
};