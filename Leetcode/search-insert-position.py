class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        n = len(nums)
        l, r = 0, n-1
        mp = (l + r) // 2
        while l <= r:
            mp = (l + r) // 2
            if nums[mp] == target: return mp
            elif nums[mp] < target: l = mp + 1
            else : r = mp - 1
        if nums[mp] < target: return mp+1
        else : return mp