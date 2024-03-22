limit=int(input("Enter the limit "))
for i in range(limit,-1,-1):
    for j in range(1,i+1):
        print(j,end="")
    print()