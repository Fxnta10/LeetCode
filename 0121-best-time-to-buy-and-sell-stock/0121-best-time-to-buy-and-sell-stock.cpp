class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int max_profit=0;
        int right=0;
        while(right<prices.size()){
            max_profit= max(max_profit,prices[right]-prices[left]);
            if(prices[right]<prices[left]){
                left++;
            }else{
                right++;
            }
        }
        if(max_profit<0){
            return 0;
        }
        return max_profit;
    }
};