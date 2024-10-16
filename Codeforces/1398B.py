for _ in range(int(input())):
    s = input()
    a = []
    temp = 0
    for i in s:
        if i == '1':
            temp += 1
        else :
            a.append(temp)
            temp = 0
    if temp != 0:
        a.append(temp)
    a.sort(reverse=True)
    print(sum(a[::2]))