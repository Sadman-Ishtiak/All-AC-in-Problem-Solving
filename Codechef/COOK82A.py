from math import *
t = int(input())
for _ in range(t):
    nameAndGoals = {}
    for i in range(4):
        n,g = input().split()
        nameAndGoals[n] = int(g)
    if nameAndGoals["RealMadrid"] < nameAndGoals["Malaga"] and nameAndGoals["Barcelona"] > nameAndGoals["Eibar"]:
        print("Barcelona")
    else : print("RealMadrid")