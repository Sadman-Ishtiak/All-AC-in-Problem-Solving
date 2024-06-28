m = {0 : 0}
for i in range(1, 101):
    m[i] = m[i-1] + i*i
while True:
    x = int(input())
    if x == 0 :
        break
    print(m[x])