for _ in range(int(input())):
    n, k = map(int, input().split())
    if k == 1: print("YES")
    elif k % 2 == n % 2: print("YES")
    elif n % 2 == 0: print("YES")
    else : print("NO")