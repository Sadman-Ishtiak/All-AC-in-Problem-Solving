g1 = [1, 3, 5, 7, 8, 10, 12]
g2 = [4, 6, 9, 11]
g3 = [2]
a, b = map(int, input().split())
print("Yes" if (a in g1 and b in g1) or (a in g2 and b in g2) or (a == b == 2) else "No")