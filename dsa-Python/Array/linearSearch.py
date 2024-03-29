def linearSearch(arr,l,num):
    for i in range(l):
        if arr[i]==num:
            return i
    return -1
limit=int(input("Enter the limit of array "))
l=[int(input()) for _ in range(limit)]
num=int(input("Enter the number to find"))
print(linearSearch(l,limit,num))