limit=int(input())
count=1
for i in range(0,limit,1):
    print(" "*(limit-i-1),end="")
    print("*"*count)
    count+=2
count=2*limit-1
for i in range (limit,0,-1):
    print(" "*(limit-i),end="")
    print("*"*count)
    count-=2