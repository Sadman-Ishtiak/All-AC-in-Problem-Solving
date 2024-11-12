from math import * 
for _ in range(int(input())):
    n, b, c = map(int, input().split())
    if c >= n: print(n)
    elif b != 0 :
        print(n - max(0, 1+(n-c-1)//b))
    else:
        if c >= n-2: print(n-1)
        else: print(-1)