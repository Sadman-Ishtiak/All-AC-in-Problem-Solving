for _ in range(int(input())):
    a, b = input().split()
    ans = ""
    x = min(len(a), len(b))
    for i in range(x):
        ans += (a[i] + b[i])
    ans += a[x:]
    ans += b[x:]
    print(ans)