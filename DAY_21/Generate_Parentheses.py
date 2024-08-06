# Problem
# Link to problem description - https://leetcode.com/problems/generate-parentheses/description/

class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        def backtrack(curr, open_count, close_count):
            if len(curr) == 2 * n:
                result.append("".join(curr))
                return

            if open_count < n:
                curr.append('(')
                backtrack(curr, open_count + 1, close_count)
                curr.pop()

            if close_count < open_count:
                curr.append(')')
                backtrack(curr, open_count, close_count + 1)
                curr.pop()
        result = []
        backtrack([], 0, 0)
        return result
        