for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    s = set(a)
    for i in s:
        if a.count(i) == 1:
            print(a.index(i)+1)