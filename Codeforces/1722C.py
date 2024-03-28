for _ in range(int(input())):
  n = int(input())
  a = input().split()
  b = input().split()
  c = input().split()
  s = a + b + c
  ans = [0, 0, 0]
  s1 = [a, b, c]
  s2 = {}
  for i in s:
    s2[i] = 0
  for i in s:
    s2[i] += 1
  for i in range(3):
    for j in s1[i]:
      if s2[j] == 1: ans[i] += 3
      if s2[j] == 2: ans[i] += 1
  print(ans[0], ans[1], ans[2], sep=" ")