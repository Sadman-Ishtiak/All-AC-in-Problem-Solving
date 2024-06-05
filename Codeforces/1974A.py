import math
for _ in range(int(input())):
    x, y = map(int, input().split())
    ans = math.ceil(y/2)
    if y%2 == 0: x-=ans*7
    else: 
        x -= 11
        x -= (ans-1)*7
    if x > 0:
        ans += math.ceil(x/15)
    print(ans)