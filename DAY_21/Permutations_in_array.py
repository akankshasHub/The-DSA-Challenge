# GeeksforGeeks Problem
# Link to problem description - https://www.geeksforgeeks.org/problems/permutations-in-array1747/1

class Solution:
    def isPossible(self, k, arr1, arr2):
        #Your code goes here.
        arr1.sort()
        arr2.sort(reverse=True)
    
        for i in range(len(arr1)):
            if arr1[i] + arr2[i] < k:
                return False
        return True