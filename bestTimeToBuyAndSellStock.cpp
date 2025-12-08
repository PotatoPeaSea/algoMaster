class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int currentLeast = prices[0];
        int currentProfit = 0;
        for(int i = 1; i<prices.size(); i++){
            if(prices[i]<currentLeast){
                currentLeast = prices[i];
            }
            currentProfit = prices[i]-currentLeast;
            if(maxProfit<currentProfit){
                maxProfit = currentProfit;
            }
    
        }
        return maxProfit;
    }
};