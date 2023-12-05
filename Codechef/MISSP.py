for _ in range(int(input())):
    n = int(input())
    dolls = [int(input()) for i in range(n)]
    for i in set(dolls):
        if dolls.count(i) %2 == 1:
            print(i)
            break