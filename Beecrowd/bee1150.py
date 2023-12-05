x = int(input())
z = 0
while True:
    z = int(input())
    if z > x : break
sum = 0
ans = 0
while sum < z:
    sum += x
    x += 1
    ans += 1
print(ans)