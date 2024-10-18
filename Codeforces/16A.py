n, m = map(int, input().split())
s = []
for i in range(n):
    s.append(input())

ans = True

for i in s:
    if len(set([k for k in i])) > 1:
        ans = False

for i in range(1, n):
    if(s[i] == s[i-1]):
        ans = False

print("YES" if ans else "NO")