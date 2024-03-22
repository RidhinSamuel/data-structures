limit=int(input("Enter the limit \n"))

for i in range(limit,0,-1):
    for j in range(0,i):
        print(chr(ord('A')+j),end="")
    if i!=1:
        print("\n")