while True:
    n = int(input())
    if n == 0: break
    a = str(list(range(1,n+1)))[1:-1]
    print(a.replace(", ", " "))