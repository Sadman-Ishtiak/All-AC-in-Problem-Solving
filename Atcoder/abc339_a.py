a = input()
while ".." in a:
    a = a.replace("..", ".")
print(a.split(".")[-1])