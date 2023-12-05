for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = set(a)
    c = [a.count(i) for i in b]
    print("No" if max(c) > 2 else "Yes")