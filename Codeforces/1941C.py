for _ in range(int(input())):
    n = input()
    s = input()
    ans = s
    while "map" in ans or "pie" in ans:
        ans = ans.replace("mapie", "maie")
        ans = ans.replace("map", "mp")
        ans = ans.replace("pie", "pe")
    print(len(s) - len(ans))