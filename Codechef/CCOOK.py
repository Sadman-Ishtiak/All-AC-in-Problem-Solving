ans = ["Beginner", "Junior Developer", "Middle Developer", "Senior Developer", "Hacker", "Jeff Dean"]
for _ in range(int(input())):
    a = sum(list(map(int, input().split())))
    print(ans[a])