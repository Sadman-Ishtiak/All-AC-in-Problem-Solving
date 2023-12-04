for _ in range(int(input())):
    n,x = map(int, input().split())
    y = 2*n - x
    print(x-y if(x-y >=0) else 0)