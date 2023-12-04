for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    d = list(map(int, input().split()))
    total = set(a+d)
    dic ={}
    for i in range(1440):
        dic[i] = 0
    for i in (a+d):
        dic[i] += 1
    print(max(dic.values()))