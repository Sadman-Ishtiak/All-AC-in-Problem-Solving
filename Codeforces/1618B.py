for _ in range(int(input())):
    n = int(input())
    a = input().split()
    l = len(a)
    ans = [a[0][0]]
    for i in range(1, l):
        if a[i-1][1] == a[i][0]:
            ans.append(a[i][0])
        else :
            ans.append(a[i-1][1])
            ans.append(a[i][0])
    ans.append(a[-1][-1])
    if len(ans) != n:
        ans.append('a')
    print("".join(ans))