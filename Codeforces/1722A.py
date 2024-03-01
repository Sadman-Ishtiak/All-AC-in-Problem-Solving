for _ in range(int(input())):
    n = int(input())
    s = sorted(input())
    flag = sorted("Timur")
    if s == flag and n == 5:
        print("YES")
    else :
        print("NO")