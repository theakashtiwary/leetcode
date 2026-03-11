class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int  min_price=prices[0];
         int maxprice=0;
         int profit;
          for(int i = 0; i < prices.size(); i++){
            min_price=min(min_price,prices[i]);
            profit=prices[i]-min_price;
            maxprice=max(maxprice,profit);
        
    }
    return maxprice;
    }
};