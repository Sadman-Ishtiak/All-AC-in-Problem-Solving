a,b = map(int, input().split())
for i in range(b):
    print(i+1,end="")
    if (i+1)%a == 0: print()
    else : print(" ", end="")