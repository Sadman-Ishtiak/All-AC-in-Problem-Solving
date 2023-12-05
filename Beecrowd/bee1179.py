def ppe(a):
    for i in range(len(a)):
        print("par[" +str(i) + "] = " + str(a[i]))

def ppo(a):
    for i in range(len(a)):
        print("impar[" +str(i) + "] = " + str(a[i]))

a ,b = [], []
for i in range(15):
    x = int(input())
    if x%2 == 0 : a.append(x)
    else : b.append(x)
    if len(a) == 5 :
        ppe(a)
        a = []
    if len(b) == 5 :
        ppo(b)
        b = []
ppo(b)
ppe(a)