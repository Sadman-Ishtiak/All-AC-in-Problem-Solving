from math import floor
n,k = map(int, input().split())
a = list(map(int, input().split()))
b = [i+k for i in a]
a = [i for i in b if i <= 5]
print(floor(len(a)/3))