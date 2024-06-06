for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    s = {}
    for i in range(n):
        diff = a[i] - i
        if diff not in s:
            s[diff] = 0
        s[diff] += 1
    ans = [i-1 for i in s.values()]
    ans = sum([i*(i+1)//2 for i in ans])
    print(ans)