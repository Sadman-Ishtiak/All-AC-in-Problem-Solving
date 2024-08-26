for _ in range(int(input())):
    n = float(input())
    if n % 4 == 0: print(min(int(n*1.25), 10000))
    else :  print(min(n * 1.25, 10000))