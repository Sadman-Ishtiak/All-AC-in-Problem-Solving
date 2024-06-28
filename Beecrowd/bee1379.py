while True:
    try:
        a = list(map(int, input().split()))
        if a[0] == 0 and a[1] == 0: break
        a.sort()
        print(2*a[0] - a[1])
        # print(a)
    except:
        break