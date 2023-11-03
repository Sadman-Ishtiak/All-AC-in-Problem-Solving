n = int(input())
a = list(map(int, input().split()))
big, small, ans = a[0],a[0],0
for i in a:
    if i > big:
        big = i
        ans+=1
    if i < small:
        small = i
        ans+=1
print(ans)