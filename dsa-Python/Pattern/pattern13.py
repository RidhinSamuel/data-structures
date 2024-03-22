limit=int(input("Enter the limit "))
count=1
print()
for i in range(1,limit+1):
    for j in range(1,i+1):
        print(count,end=" ")
        count+=1
    print()