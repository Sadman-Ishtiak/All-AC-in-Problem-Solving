num = 600851475143
factors = []
flag = 2

while num != 1:
    while num%flag == 0:
        num = num / flag
        factors.append(flag)
    flag += 1

print(factors[-1])