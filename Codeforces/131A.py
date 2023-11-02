s = input()
if len(s) == 1: print(s.upper() if s.islower() else s.lower())
elif s.isupper(): print(s.lower())
elif s[1:].isupper() and s[0].islower():
    print(s[0].upper(), s[1:].lower(), sep="")
else : print(s)