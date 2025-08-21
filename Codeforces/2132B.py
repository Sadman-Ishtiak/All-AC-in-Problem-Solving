for _ in range(int(input())):
    s = input()
    n = int(s)
    possible = []
    for i in range(1, len(s)):
        if (n % (1 + 10**i)) == 0:
            possible.append(n // (1 + 10**i))
    print(len(possible))
    possible = sorted(possible)
    if(len(possible) > 0):
        for i in possible:
            print(i, end=' ')
        print()