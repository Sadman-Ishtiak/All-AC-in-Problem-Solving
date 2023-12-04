a,b = map(int, input().split())
x,y = map(int, input().split())
print("Dominater" if((a+x) > (b+y)) else "Everule")