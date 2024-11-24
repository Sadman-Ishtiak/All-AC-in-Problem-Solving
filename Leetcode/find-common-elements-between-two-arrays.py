class Solution:
    def findIntersectionValues(self, nums1: List[int], nums2: List[int]) -> List[int]:
        s1, s2 = set(nums1), set(nums2)
        d1, d2 = {}, {}
        for i in s1: d1[i] = 0
        for i in s2: d2[i] = 0
        for i in nums1: d1[i] += 1
        for i in nums2: d2[i] += 1
        z = s1.intersection(s2)
        a, b = 0, 0
        for i in z: a += d1[i]
        for i in z: b += d2[i]
        return (a, b)