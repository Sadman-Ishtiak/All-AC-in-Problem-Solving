import math
for _ in range(int(input())):
    a,b,c = map(int, input().split())
    up = (a + b - c) * ( a + c - b) * (b + c - a)
    down = 4 * (a + b + c)
    g = math.gcd(up, down)
    up = up // g
    down = down // g
    print(f"{up}/{down}")