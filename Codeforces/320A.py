a = input()
a = a.replace('144', '   ')
a = a.replace('14', '  ')
a = a.replace('1', ' ')
a = a.replace(" ", '')
print("YES" if a == '' else "NO")