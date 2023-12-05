def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    p = 0
    for i in range(n):
        p += a[i]
        p -= k
        if(p < 0) :
            print("NO", i+1)
            return
    print("YES")
for _ in range(int(input())):
    solve()