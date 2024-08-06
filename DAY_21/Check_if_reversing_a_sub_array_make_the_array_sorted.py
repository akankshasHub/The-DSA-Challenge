# GeeksforGeeks Problem
# Link to problem description - https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution:
    def arraySortedOrNot(self, arr) -> bool:
        # code here
        for i in range(len(arr) - 1):
            if arr[i] > arr[i + 1]:
                return False
        return True