limit=int(input())
for i in range(1,limit+1):
    if i==1 or i==limit:
        print("*"*limit+"\n")
    else:
        print("*"+" "*(limit-2)+"*"+"\n")
