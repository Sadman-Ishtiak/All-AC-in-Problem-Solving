t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    ans = a[0] + a[-1]
    for i in range(n-1):
        if (ans < (a[i] + a[i+1])) :
            ans = a[i] + a[i+1]
    print(ans)