# LeetCode Problem
# Link to problem description - https://leetcode.com/problems/simplify-path/

class Solution:
    def simplifyPath(self, path: str) -> str:
        components = path.split('/')
        stack = []
        for component in components:
            if component == '..':
                if stack:
                    stack.pop()
            elif component == '.' or component == '':
                continue
            else:
                stack.append(component)
        simplified_path = '/' + '/'.join(stack)
        return simplified_path