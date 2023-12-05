gc = ca = cb = 0
while True:
    a,b = map(int, input().split())
    e = int(input("Novo grenal (1-sim 2-nao)\n"))
    if a > b: ca+=1
    if a < b: cb+=1
    gc += 1
    if e == 2: break
print(gc, "grenais")
print("Inter:", ca, sep="")
print("Gremio:", cb, sep="")
print("Empates:", gc-ca-cb, sep="")
if ca>cb: print("Inter venceu mais")
elif ca<cb: print("Gremio venceu mais")
else: print("Não houve vencedor")