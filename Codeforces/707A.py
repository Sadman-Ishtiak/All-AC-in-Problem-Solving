n,m = map(int, input().split())
s = []
for _ in range(n):
    s = s + input().split()
s = set(s)
if 'C' in s or 'M' in s or 'Y' in s : print("#Color")
else : print("#Black&White")