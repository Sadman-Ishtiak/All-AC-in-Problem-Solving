a = input()

i = int(a[0])
i = min(9-i,i) if 9-i!=0 else 9
print(i, end="")
for i in a[1:]:
    i = int(i)
    i = min(abs(9-i), i)
    print(i, end="")