n = int(input())
a = list(map(int, input().split()))
s = [0,0]
for i in range(n):
    x = max([a[0], a[-1]])
    a.pop(a.index(x))
    s[i%2] += x
# s.sort(reverse=True)
print(s[0], s[1])