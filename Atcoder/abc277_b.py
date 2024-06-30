a = set("HDCS")
b = set("A23456789TJQK")
l = []
ans = True
for i in range((int(input()))):
    x = input()
    if x[0] not in a : ans = False
    if x[1] not in b : ans = False
    l.append(x)
if len(l) != len(set(l)): ans = False

print("Yes" if ans else "No")