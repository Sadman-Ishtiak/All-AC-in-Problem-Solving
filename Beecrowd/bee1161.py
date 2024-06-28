m = {0 : 1}

for i in range(1, 21):
    m[i] = m[i-1] * i

while True:
    try:
        a, b = map(int, input().split())
        print(m[a] + m[b])
    except: break