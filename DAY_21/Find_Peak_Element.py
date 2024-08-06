#GeeksforGeeks Problem
# Link to problem description - https://www.geeksforgeeks.org/make-array-elements-equal-minimum-cost/

 if n <= 1:
        return 0
    
    
    dp = [[float('inf')] * 101 for _ in range(n)]
    
    
    for j in range(101):
        dp[0][j] = abs(arr[0] - j)
    for i in range(1, n):
        for j in range(101):
            if dp[i-1][j] != float('inf'):  
                min_val = max(0, j - target)
                max_val = min(100, j + target)
                for k in range(min_val, max_val + 1):
                    dp[i][k] = min(dp[i][k], dp[i-1][j] + abs(arr[i] - k))
    min_cost = min(dp[n-1])
    
    return min_cost