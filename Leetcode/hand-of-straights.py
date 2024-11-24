class Solution(object):
    def isNStraightHand(self, hand, groupSize):
        if len(hand) % groupSize != 0 : return False
        d = {}
        for i in hand:
            if i not in d:
                d[i] = 0
            d[i] += 1
        for i in sorted(d.keys()):
            count = d[i]
            if count == 0: continue
            for j in range(groupSize):
                if (i+j) not in d:
                    return False
                if d[i+j] < count:
                    return False
                d[i+j] -= count
        return True

        