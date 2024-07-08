for _ in range(int(input())):
    n, m = map(int, input().split())
    a = input()
    b = input()
    ans = []
    ans.append(1 if a[0] == b[0] else 0)
    for i in range(1, m):
        if ans[-1] == n : break
        if a[ans[-1]] == b[i]:
            ans.append(ans[-1] + 1)
    print(ans[-1])