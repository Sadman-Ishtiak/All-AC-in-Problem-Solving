for _ in range(int(input())):
    x,y,z = map(int, input().split())
    print("YES" if(x*y <= z*24*60) else "NO")