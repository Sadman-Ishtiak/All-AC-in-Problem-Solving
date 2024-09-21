for _ in range(int(input())):
    a, b = map(int, input().split())
    ans = []
    for i in range(a):
        s = input()
        ans.append(s[::b])
    ans = ans[::b]
    for i in ans:
        print(i)