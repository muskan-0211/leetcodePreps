Solution 1:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Initialize variables for buying price and maximum profit
        int buy = INT_MAX;  // Initialize buy to a large value to ensure the first price is always smaller
        int profit = 0;

        // Iterate through the prices array
        for (int i = 0; i < prices.size(); i++) {
            // Check if the current price is smaller than the previous buying price
            if (prices[i] < buy) {
                buy = prices[i];  // Update buying price if the current price is smaller
            }
            
            // Update the maximum profit by comparing with the current profit (price - buying price)
            profit = max(profit, (prices[i] - buy));
        }

        // Return the maximum profit
        return profit;
    }
};
Solution 2:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i= 1, profit = 0, min_price = prices[0], n=prices.size();
        while(i<n){
            if(prices[i] < min_price){
                min_price = prices[i];
            }else{
                profit = max(profit, prices[i]-min_price);
            }
            i++;
        }
        return profit;
    }
};