from math import gcd
a,b = map(int, input().split('/'))
ans1, ans2 = 5*a - 32*5*b, b*9
g = gcd(ans1, ans2)
print(f"{ans1//g}/{ans2//g}")