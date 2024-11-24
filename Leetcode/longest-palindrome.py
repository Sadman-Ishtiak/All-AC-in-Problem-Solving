class Solution:
    def longestPalindrome(self, s: str) -> int:
        n = len(s)
        d = {}
        for i in s:
            if i not in d:
                d[i] = 0
            d[i] += 1
        ans = 0
        odds = 0
        for i in d:
            if d[i] %2 == 0:
                ans += d[i]
            else:
                ans += d[i]-1
                odds += 1
        if odds > 0: ans += 1
        return ans