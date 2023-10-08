t = int(input())
for _ in range(t):
    a , b = map(int, input().split())
    if (a**4) + 4*(b**2) == 4*(a**2)*b : print("YES")
    else : print("NO")