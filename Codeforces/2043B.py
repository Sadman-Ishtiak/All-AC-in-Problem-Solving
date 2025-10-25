import sys
sys.set_int_max_str_digits(1000000)

def fact(n):
    if n <= 1:
        return 1
    return n*fact(n-1)

for _ in range(int(input())):
    d, n = map(int, input().split())
    n, d = d, n
    n = min(n, 7)
    num = int(str(d)*fact(n))
    for i in range(1, 10, 2):
        if num % i == 0:
            print(i, end=' ')
    print()