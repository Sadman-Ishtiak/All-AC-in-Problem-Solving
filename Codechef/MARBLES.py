import math
t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    print(math.comb(a-1,b-1))