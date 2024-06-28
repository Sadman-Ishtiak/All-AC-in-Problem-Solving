while True:
    n = int(input())
    if n == 0:
        break
    ans = [[min(i+1, j+1, n-i, n-j) for i in range(n)] for j in range(n)]

    # Display
    for i in range(n):
        tx = ''
        for j in range(n):
            tx += " %3d" %ans[i][j]
        print(tx[1:])
    print("")