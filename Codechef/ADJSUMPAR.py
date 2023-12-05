for _ in range(int(input())):
    n = int(input())
    b = list(map(int, input().split()))
    print("YES" if sum(b)%2 == 0 else "NO")