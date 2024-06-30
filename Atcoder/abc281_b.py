a = input()
x = "QWERTYUIOPLKJHGFDSAZXCVBNM"
# print(x, len(set(x)))
if a[0] in x and a[-1] in x and a[1:-1].isdigit() and len(a) == 8:
    if 100000<=int(a[1:-1]) <= 999999 : print("Yes")
    else : print("No")
else : print("No")