s = input()
se = set()
for i in s:
  se.add(i)
se.difference_update({' ',',','{','}'})
print(len(se))