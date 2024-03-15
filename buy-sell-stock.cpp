/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
		// Condition to check if prices array has values in descending order where we'll return 0
		int flag = 0;
		for(int i = 0; i < prices.size()-1; i++){
			if(prices.at(i) < prices.at(i+1))
				flag = 1;
		}
		if(flag == 0)
			return 0;
		
		int min_price = prices[0];
		
		for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < minPrice) {
                minPrice = prices[i]; // Update minPrice if a lower price is encountered
            } else {
                // Calculate the profit by selling at prices[i] and update maxProfit if greater
                maxProfit = std::max(maxProfit, prices[i] - minPrice);
            }
        }
		
		/* Going for the Scenario where there is no descending order and there has to be some kind of profit
		int profit = 0;
		for(int j = 0; j < prices.size(); j++){
			for(int k = 0; k < prices.size(); k++){
				if(prices.at(j) < prices.at(k) && (prices.at(k)-prices.at(j)) > profit && j < k)
				profit = prices.at(k)-prices.at(j);
			}
		}
		
		O(n2) - Time Complexity
		*/
		return profit;
    }
};