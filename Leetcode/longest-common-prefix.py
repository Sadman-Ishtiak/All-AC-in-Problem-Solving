class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        i = 0
        strs = sorted(strs)
        if(len(strs) == 1):
            return strs[0]
        while i <= 200:
            if strs[0][:i] != strs[-1][:i] :
                ans = strs[0][:i-1]
                return ans
            i += 1
        if strs[0] == strs[-1] : return strs[0]
        else : return ""