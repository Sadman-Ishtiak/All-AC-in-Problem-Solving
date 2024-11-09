for _ in range(int(input())):
    a = input()
    a = a.replace(".", "")
    ans = 0
    while bool(a):
        x = a.count("<>")
        ans = ans + x
        a = a.replace("<>","")
        if(x == 0) : break
    print(ans)