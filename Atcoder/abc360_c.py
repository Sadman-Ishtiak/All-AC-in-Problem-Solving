n = int(input())
items = list(map(int, input().split()))
weights = list(map(int, input().split()))
boxes = {}
for i in range(1, n+1):
    boxes[i] = []
for i in range(n):
    boxes[items[i]].append(weights[i])
ans = 0
for i in boxes:
    boxes[i] = sorted(boxes[i])
    ans += sum(boxes[i])
    if bool(boxes[i]): ans -= boxes[i][-1]
print(ans)