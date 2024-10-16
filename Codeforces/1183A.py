a = input()

while sum(int(i) for i in a)%4 != 0:
    num = int(a)
    num += 1
    a = str(num)

print(a)