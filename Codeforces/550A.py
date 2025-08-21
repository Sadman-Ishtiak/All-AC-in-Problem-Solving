s = input()
if ("AB" in s and "BA" in s[s.index("AB")+2:]) or ("BA" in s and "AB" in s[s.index("BA")+2:]):
    print("YES")
else:
    print("NO")
