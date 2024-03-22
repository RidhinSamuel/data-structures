limit=int(input("Enter the limit \n"))

for i in range(1,limit+1):
    for j in range(0,i):
        print(chr(ord('A')+j),end="")
    print()