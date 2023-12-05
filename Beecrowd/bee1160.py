import math
def solve():
    a,b,ra,rb = map(float, input().split())
    a, b = int(a), int(b)
    ra, rb = ra/100, rb/100
    counter = 0
    for i in range(100):
        a += math.floor(a*ra)
        b += math.floor(b*rb)
        counter += 1
        if a > b:
            print(counter, "anos.")
            return
    print("Mais de 1 seculo.")
for _ in range(int(input())):
    solve()