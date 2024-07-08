for _ in range(int(input())):
    s = list(input())
    t = sorted(s)
    i = s.index(t[0])
    print(t[0], "".join(s[:i] + s[i+1:]))