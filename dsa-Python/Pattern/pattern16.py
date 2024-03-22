limit=int(input("Enter the limit \n"))

for i in range(0,limit):
    for j in range(0,i+1):
        print(chr(ord('A')+i),end="")
    print()