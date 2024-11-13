for _ in range(int(input())):
    s = input()
    flag = True
    for i in range(1, len(s)):
        a, b = s[:i], s[i:]
        if(a[0] == '0' or b[0] == '0') : continue
        if(int(a) < int(b)):
            print(a, b)
            flag = False
            break
    if flag : print(-1)