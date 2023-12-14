vowels = {'A', 'E', 'I', 'O', 'U'}
for _ in range(int(input())):
    s1 = input()
    s2 = "CODETOWN"
    ans = True
    for i in range(8):
        if   (s1[i] in vowels) and (s2[i] in vowels) : pass
        elif (s1[i] not in vowels) and (s2[i] not in vowels) : pass
        else : ans = False
    if ans : print("YES")
    else : print("NO")