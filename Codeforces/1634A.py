for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    ans = set([s])
    for i in range(k):
        x = set()
        for j in ans:
            x.add(j + j[::-1])
            x.add(j[::-1] + j)
        if len(ans) == len(x):
            break
        ans = x
    print(len(ans))