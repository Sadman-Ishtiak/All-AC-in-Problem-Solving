import math
n, m = map(int, input().split())
if n < m:
  print(-1)
else:
  ans = math.ceil(n/2)
  while ans%m != 0:
    ans += 1
  print(ans)

