a = list(map(int, input().split("/")))
if a[0] > 2019:
    print("TBD")
elif a[0] < 2019:
    print("Heisei")
else:
    if a[1] > 4:
        print("TBD")
    elif a[1] < 4:
        print("Heisei")
    else:
        if a[2] > 30:
            print("TBD")
        else : print("Heisei")