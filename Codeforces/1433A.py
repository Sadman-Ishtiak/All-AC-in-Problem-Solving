a = []
for i in range(1,10):
    # print(str(i), str(i)*2, str(i)*3)
    a.append((str(i)*1))
    a.append((str(i)*2))
    a.append((str(i)*3))
    a.append((str(i)*4))
for _ in range(int(input())):
    n = int(input())
    ans = 0
    for i in range(a.index(str(n))+1):
        ans += len(a[i])
    print(ans)