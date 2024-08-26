import math
n = int(input())
def gpa_of(n):
    prime = [0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
    a = (1.68 + (n-1) * ((0.39)**(n-1))) / (prime[n] % (8 - n + 2))

    a = 2 ** (a - math.floor(a))
    a -= math.floor(a)
    a = math.pi + a
    if(n == 3) : a += 0.25
    
    return round(a, 2)


avg = round((3.93  + 3.75  + 3.71  + 3.95  + 3.85  + 3.79  + 3.94  + 3.75)/8, 2)

gpa = gpa_of(n)

flag = ['1st', '2nd', '3rd', '4th', '5th', '6th', '7th', '8th']

if gpa < avg : print(f"Hridi is Unhappy with her {flag[n-1]} semester result. That is: {gpa}")
else : print(f"Hridi is Happy with her {flag[n-1]} semester result. That is: {gpa}")