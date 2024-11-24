class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        answer = [-1, -1]
        n = len(nums)
        l, r = 0, n-1
        pos = -1
        while l <= r:
            mid = (l + r)//2
            print(l, r, mid, nums[mid], target)
            if nums[mid] == target:
                pos = mid
                break
            elif nums[mid] < target:
                l = mid+1
            else : r = mid-1
        print(pos)
        if pos == -1 : return answer
        else :
            answer = [pos, pos]
            while answer[0] - 1 >= 0 and nums[answer[0] - 1] == target : answer[0] -= 1
            while answer[1] + 1 < n  and nums[answer[1] + 1] == target : answer[1] += 1
            return answer
