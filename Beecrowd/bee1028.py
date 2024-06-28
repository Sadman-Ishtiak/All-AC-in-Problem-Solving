def gcd(a, b):
    if a == 0: return b
    return gcd(b%a, a)

for _ in range(int(input())):
    a, b = map(int, input().split())
    print(gcd(a,b))