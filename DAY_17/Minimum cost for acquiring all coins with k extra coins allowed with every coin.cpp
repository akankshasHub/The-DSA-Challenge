/* GeeksforGeeks Problem 
Link to problem description - https://www.geeksforgeeks.org/minimum-cost-for-acquiring-all-coins-with-k-extra-coins-allowed-with-every-coin/*/

class Solution{
	public:
	int MinCoin(vector<int>nums, int amount)
	{
	    // Code here
	     vector<int> dp(amount + 1, INT_MAX);
        dp[0] = 0; 
        for (int coin : nums) {
            for (int i = coin; i <= amount; ++i) {
                if (dp[i - coin] != INT_MAX) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        
        return dp[amount] == INT_MAX ? -1 : dp[amount];
	}
};