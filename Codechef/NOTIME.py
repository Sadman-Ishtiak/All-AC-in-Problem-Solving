n,h,x = map(int,input().split())
a = list(map(int, input().split()))
if x+max(a) >= h: print("YES")
else : print("NO")