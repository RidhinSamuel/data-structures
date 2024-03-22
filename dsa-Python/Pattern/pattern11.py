limit=int(input())
for i in range(1,limit+1):
    start=1
    if i%2==0:
        start=0
    for j in range(1,i+1):
        print(start,end=" ")
        start=(start+1)%2
    print()