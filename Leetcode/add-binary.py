class Solution:
    def addBinary(self, a: str, b: str) -> str:
        def i2b(num: int):
            ans = []
            while num != 0:
                ans.append(str(num%2))
                num = num//2
            x = ""
            for i in ans : x = i + x
            return x if x else "0"
        def b2i(s : str):
            n = len(s)
            ans = 0
            for i in range(n):
                if s[n-i-1] == '1':
                    ans += 1<<i
            return ans
        a = b2i(a)
        b = b2i(b)
        ans = a+b
        return i2b(ans)