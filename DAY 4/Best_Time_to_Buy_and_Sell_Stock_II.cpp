/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/ */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,buy=prices[0];
        int n=prices.size();
        for( int i=1;i<n;i++)
        {
            if(prices[i]>buy)
            {
                profit=profit+(prices[i]-buy);
            }    
            buy=prices[i];
            
        }
        return profit;
    }
};