for _ in range(int(input())):
    x, y = map(int, input().split())
    x += (x+1)%2
    print(sum(range(x,x+2*y, 2)))