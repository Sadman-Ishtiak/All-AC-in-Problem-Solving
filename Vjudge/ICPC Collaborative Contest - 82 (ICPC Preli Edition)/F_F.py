import math
'''
1970 - thu
1971 - fri
1972 - sat - leap year
1973 - mon
'''
# mon = 0, tue = 1, ... sun = 6

days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
leap = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
curr = 3
full_calander = {}
# print(sum(days), sum(leap))

def inleap(year):
    if year%400 == 0 : return True
    elif year%4 == 0 and year % 100 != 0 : return True
    else : return False

def takesrow(a, start):
    ...

def dayafter(n):
    curr = (curr + n%7) % 7
    return curr


for i in range(1970, 2038):
    wow = leap if inleap(i) else days
    calander = []
    for months in wow:
        row = []
        for x in range(curr):
            row.append('.')
        for date in range(1, months+1):
            row.append(date)
            curr = (curr+1)%7
        calander.append(math.ceil(len(row)/7))
    full_calander[i] = calander


print(sum(full_calander[int(input())]))