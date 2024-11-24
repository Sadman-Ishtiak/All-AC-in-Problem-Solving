import math
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans = []
        for i in range(numRows):
            add = []
            for j in range(i+1):
                add.append(math.comb(i,j))
            ans.append(add)
        return ans