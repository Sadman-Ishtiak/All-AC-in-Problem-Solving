def ssum(n):
    return int(n*(n+1)/2)
a = list(map(int, input().split()))
print(ssum(a[0]+a[-1]) - ssum(a[0]) - a[-1])