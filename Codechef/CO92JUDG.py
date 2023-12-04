for _ in range(int(input())):
    n = int(input())
    a = sorted(map(int, input().split()))
    b = sorted(map(int, input().split()))
    if sum(a)-a[-1] < sum(b)-b[-1]: print("Alice")
    elif sum(a)-a[-1] > sum(b)-b[-1]: print("Bob")
    else : print("Draw")