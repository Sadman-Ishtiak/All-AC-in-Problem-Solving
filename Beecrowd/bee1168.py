m = {
    '1': 2,
    '2':5,
    '3':5,
    '4':4,
    '5':5,
    '6':6,
    '7':3,
    '8':7,
    '9':6,
    '0':6
     }
for _ in range(int(input())):
    a = input()
    ans = 0
    for i in a:
        ans += m[i]
    print(ans, "leds")