for _ in range(int(input())):
    n = int(input())
    s = input()
    while "()" in s:
        s = s.replace("()", "")
    print(int(len(s)/2))