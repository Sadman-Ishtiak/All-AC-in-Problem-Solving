n = int(input())
a = list(map(int, input().split()))
chest = sum([a[i] for i in range(0, n, 3)])
bicep = sum([a[i] for i in range(1, n, 3)])
back = sum([a[i] for i in range(2, n, 3)])
if chest > max(bicep, back) : print("chest")
if bicep > max(chest, back) : print("biceps")
if back > max(chest, bicep) : print("back")