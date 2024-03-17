for _ in range(int(input())):
    a = list(map(int, input().split()))
    a.sort()
    if a[1] == a[2] and a[1] != a[0]:
        print("YES")
        print(a[0], a[1], 1)
    elif a[0] == a[2]:
        print("YES")
        print(a[0], a[1], a[2])
    else : print("NO")