limit=int(input())
gap=limit*2-2
for i in range(1,limit+1):
    print("*"*i,end="")
    print(" "*gap,end="")
    print("*"*i)
    gap-=2
gap=2
for i in range(limit-1,0,-1):
    print("*"*i+" "*gap+"*"*i)
    gap+=2


