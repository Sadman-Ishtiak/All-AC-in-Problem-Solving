while True:
    x = int(input())
    if x == 0: break
    print(sum(range(x+x%2, x+10, 2)))