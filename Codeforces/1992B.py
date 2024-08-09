for _ in range(int(input())):
    n, k = map(int, input().split())
    a = sorted(map(int, input().split()))
    ans = 0
    for i in a[:-1]:
        if i == 1 : ans += 1
        else      : ans += (2 * i) - 1
    print(ans)