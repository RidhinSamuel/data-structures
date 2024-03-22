limit=int(input())
for i in range(1,limit+1):
    n=1
    while (n<=i):
        print(n,end="")
        n+=1
    print(" "*((limit-i)*2),end="")
    n-=1
    while(n>=1):
        print(n,end="")
        n-=1
    print()