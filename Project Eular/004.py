largest_prod = 999**2
smallest_prod = 10000

def ispalindrome(a):
    a = str(a)
    r = a[::-1]
    return a == r

while largest_prod > smallest_prod:
    if ispalindrome(largest_prod) : 
        for i in range(100, 1000):
            if(largest_prod%i == 0) and 100 < largest_prod/i < 1000:
                print(i, largest_prod//i, largest_prod)
                largest_prod = 1
    largest_prod -= 1