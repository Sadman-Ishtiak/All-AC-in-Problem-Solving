check = ""
for _ in range(50):
  check += "Yes"
for _ in range(int(input())):
  a = input()
  print("YES" if a in check else "NO")