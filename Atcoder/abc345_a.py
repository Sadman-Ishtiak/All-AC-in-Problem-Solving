a = input()
while '==' in a:
    a = a.replace("==", "=")
print("Yes" if a == "<=>" else "No")