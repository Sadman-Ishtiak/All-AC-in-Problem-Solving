txt = input()

# Process area

x = txt.split("+")
txt = [int(i) for i in x]
txt.sort()
x = str()
for i, num in enumerate(txt):
    x = x + str(num)
    if i+1 < len(txt):
        x = x + "+"
print(x)