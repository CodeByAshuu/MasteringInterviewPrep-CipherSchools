#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.empty()) return 0;
    
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++) {
        int profit = prices[i] - minPrice;
        
        maxProfit = max(maxProfit, profit);
        
        minPrice = min(minPrice, prices[i]);
    }
    
    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    
    return 0;
}
