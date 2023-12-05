for _ in range(int(input())):
    n = int(input())
    om = list(map(int, input().split()))
    addy = list(map(int, input().split()))
    addy_count = om_count = addy_count_t = om_count_t =0
    for i in range(n):
        if addy[i] != 0 : addy_count_t += 1
        if om[i] != 0   : om_count_t += 1
        addy_count = max(addy_count, addy_count_t)
        om_count = max(om_count, om_count_t)
        if addy[i] == 0 :
            addy_count_t = 0
        if om[i] == 0   :
            om_count_t = 0
    if addy_count > om_count   : print("Addy")
    elif addy_count < om_count : print("Om")
    else                       : print("Draw")