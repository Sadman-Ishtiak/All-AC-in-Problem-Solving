for _ in range(int(input())):
    n = input()
    a = list(map(int, input().split()))
    ans1 = max(a[:-1])
    print(ans1 + a[-1])