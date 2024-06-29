s = "CODEFESTIVAL2016"
a = input()
ans = 0
for i in range(16):
    if s[i] != a[i]:
        ans += 1
print(ans)