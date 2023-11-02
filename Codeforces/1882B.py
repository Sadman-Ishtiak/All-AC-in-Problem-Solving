t = int(input())
for _ in range(t):
    a,b,c = map(int, input().split())
    l = [a,b,c]
    flag = False
    x = min(l)
    if a%x != 0 or b%x != 0 or c%x != 0:
        print("NO")
        continue
    elif a == b == c :
        print("YES")
        continue
    elif a/x+b/x+c/x-3 <= 3:
        print("YES")
        continue
    else :
        print("NO")