limit=int(input("Enter the limit of array "))
l=[int(input()) for _ in range(limit)]
big=float('-inf')
for i in l:
    if i > big :
        big=i
print(i)