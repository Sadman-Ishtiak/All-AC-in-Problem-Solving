ansset = "abcdefghijklmnopqrstuvwxyz"
ansset = [ansset[:i] for i in range(1,27)]
# print(ansset)
for _ in range(int(input())):
    a = input()
    b = "".join(sorted(set(a)))
    l, r = 0, len(a) - 1
    ans = 'a' in a
    wow = ""
    while l <= r : 
        if a[l] > a[r] :
            # print(a[l], a[r])
            wow = a[l] + wow
            l += 1
        elif a[l] < a[r] :
            wow = a[r] + wow
            r -= 1
        else :
            if l == r : wow = a[l] + wow
            break
    ans = (b == wow) and (len(a) == len(b)) and wow in ansset
    print("YES" if ans else "NO")