def findFibonacciLoop(n):
    a=0
    b=1
    if n==1:
        print(a)
    elif n==2:
        print(a,b)
    else:
        print(a,b,end=" ")
        c=0
        for i in range(3,n+1):
            c=a+b
            print(c,end=" ")
            a=b
            c=b
def findFibonacciRecussion(n):
    if n<=1:
        return n
    return  findFibonacciRecussion(n-1)+findFibonacciRecussion(n-2)

def fibonacciMemoization(n,memo={}):
    if n<=1:
        return n
    if n in memo:
        return memo[n]
    memo[n]=fibonacciMemoization(n-1,memo)+fibonacciMemoization(n-2,memo)
    return memo[n]


if __name__=="__main__":
    while True:
        print("\nMenu\n1.Using Loop\n2.Using Recursion\n3.Using REcursion with memoization\n4.Exit\nEnter your choice:= ")
        try:
            ch=int(input())
            if ch==1:
                n=int(input("Enter the number of element"))
                findFibonacciLoop(n)
            elif ch==2:
                n=int(input("Enter the number of element"))
                print(findFibonacciRecussion(n))
            elif ch==4:
                exit()
            elif ch==3:
                n=int(input("Enter the number of element"))
                print(fibonacciMemoization(n,{}))
        except ValueError:
            print("Invalid Input")