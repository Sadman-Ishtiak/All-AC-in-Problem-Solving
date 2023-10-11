t = int(input())
for _ in range(t):
    n,a,b = map(int, input().split())
    x = list(map(int, input().split()))
    ans = x.count(a)/n
    ans *= x.count(b)/n
    print("%.10f" % ans)