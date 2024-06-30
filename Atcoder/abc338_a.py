a = input()
print("Yes" if a[0].isupper() and (a[1:].islower() or a[1:] == "") else "No")