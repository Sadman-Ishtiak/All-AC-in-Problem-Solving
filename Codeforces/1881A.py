t = int(input())
for _ in range(t):
    m,n = map(int,input().split())
    x = input()
    s = input()
    count = 0
    flag = True
    while True:
        if s in x : break
        elif len(x) > 100*len(s) :
            flag = False
            break
        else :
            x = x + x
            count += 1
    if flag : print(count)
    else : print(-1)