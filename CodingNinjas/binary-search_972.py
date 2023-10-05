def search(nums: [int], target: int):
    return nums.index(target)




    
n= int (input())
arr = list(map(int,input().strip().split()))[:n]
target =int (input())
print (search(arr, target))