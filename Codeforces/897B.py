k, p = map(int, input().split())
ans = 0
for i in range(1,k+1):
    s = str(i)
    s = s + s[::-1]
    ans += int(s) % p
print(ans % p)