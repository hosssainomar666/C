#include <stdio.h>

int main() {
    int prices[] = {13, 45, 20, 34, 19, 65, 82, 60};
    int num_prices = sizeof(prices) / sizeof(prices[0]);
    int best_buy = prices[0];
    int best_sell = prices[0];
    int max_profit = 0;
    
    for (int i = 0; i < num_prices; i++) {
        for (int j = i+1; j < num_prices; j++) {
            int profit = prices[j] - prices[i];
            if (profit > max_profit) {
                max_profit = profit;
                best_buy = prices[i];
                best_sell = prices[j];
            }
        }
    }
    
    printf("Best buy: %d\n", best_buy);
    printf("Best sell: %d\n", best_sell);
    printf("Max profit: %d\n", max_profit);
    
    return 0;
}
