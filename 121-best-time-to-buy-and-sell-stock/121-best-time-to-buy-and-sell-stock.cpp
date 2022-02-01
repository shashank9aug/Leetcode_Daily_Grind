class Solution {
public:
    int maxProfit(vector<int>& price) {
        int maxProfit = 0;
        int minPrice = price[0];
        for(int i = 1;i < price.size();i++){
            maxProfit=max(maxProfit,(price[i]-minPrice));
            minPrice=min(minPrice,price[i]);
        }
        return maxProfit;
    }
};