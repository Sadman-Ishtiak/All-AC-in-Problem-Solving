s = input()
n = len(s)
m = int(input())
arr = [i for i in s]
ans = [0 for i in s]
ans[n-1] = 0
for i in range(n-2, -1, -1):
    if arr[i] == arr[i+1]: ans[i] = ans[i+1] + 1
    else: ans[i] = ans[i+1]
# print(arr, ans)
for _ in range(m):
    l, r = map(int, input().split())
    print(ans[l-1] - ans[r-1])