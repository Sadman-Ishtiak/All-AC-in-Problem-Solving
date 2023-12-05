sum = 0
for i in range(0,20,1):
    sum += (2*i+1)/(2**i)
    # print(2*i+1, 2**i)
print(format(sum, ".2f"))