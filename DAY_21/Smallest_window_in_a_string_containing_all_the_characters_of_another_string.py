# GeeksforGeeks Problem
# Link to problem description - https://www.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string-1587115621/1

class Solution:
    
    #Function to find the smallest window in the string s consisting
    #of all the characters of string p.
    def smallestWindow(self, s, p):
        #code here
        if not s or not p or len(s) < len(p):
            return "-1"
        char_count_p = Counter(p)
        required_chars = len(char_count_p)
        current_window = Counter()
        formed_chars = 0
        left, right = 0, 0
        min_len = float('inf')
        min_window = ""
        while right < len(s):
            current_char = s[right]
            current_window[current_char] += 1
            if current_char in char_count_p and current_window[current_char] == char_count_p[current_char]:
                formed_chars += 1
            while formed_chars == required_chars and left <= right:
                current_length = right - left + 1
                if current_length < min_len:
                    min_len = current_length
                    min_window = s[left:right + 1]
                left_char = s[left]
                current_window[left_char] -= 1
                if left_char in char_count_p and current_window[left_char] < char_count_p[left_char]:
                    formed_chars -= 1
                left += 1
            
            right += 1
        return min_window if min_len != float('inf') else "-1"
