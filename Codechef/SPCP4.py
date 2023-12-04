import math
for _ in range(int(input())):
    n,b,t = map(int, input().split())
    g = n-b
    b = b%t
    g = g%t
    print(abs(b-g))