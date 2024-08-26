a, b = 1, 2

limit = 4_000_000
ans = b

while b <= limit:
    a, b = b, a+b
    if b % 2 == 0 :
        ans += b

print(ans)