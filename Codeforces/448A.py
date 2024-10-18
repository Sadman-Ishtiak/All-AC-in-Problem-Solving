from math import ceil
a = list(map(int, input().split()))
b = list(map(int, input().split()))
n = int(input())

ans = ceil(sum(a)/5) + ceil(sum(b)/10)
print("YES" if ans <= n else "NO")