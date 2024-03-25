for _ in range(int(input())):
  a = int(input())
  if a%2==0:
    print("YES")
    for i in range(0,a,2):
      print('AAB', end='')
    print()
  else:
    print("NO")