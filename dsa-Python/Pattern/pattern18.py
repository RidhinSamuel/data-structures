limit=int(input())
for i in range(1,limit+1):
    for j in range (limit-i,limit):
        print(chr(ord("A")+j),end=" ")
    print()