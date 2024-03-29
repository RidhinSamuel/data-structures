
limit=int(input("Enter the limit of array "))
l=[int(input()) for _ in range(limit)]
for i in range(len(l)-1):
    if l[i]>l[i+1]:
        print("Not Sorted")
        break
else:
    print("Sorted")