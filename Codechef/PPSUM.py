def ssum(n,d):
    if(n == 1):
        return (d*(d+1))/2
    return ssum(n-1, (d*(d+1))/2)
for _ in range(int(input())):
    a,b = map(int, input().split())
    print(int(ssum(a,b)))