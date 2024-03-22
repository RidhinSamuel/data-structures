import math
def mySqrt(x: int):
        if x==1 or x==0:
            return x
        left=1
        right=x//2
        mid=0
        count=0
        while left<=right:
            count+=1
            mid=left+(right-left)/2
            if mid*mid >x:
                right=mid-1
            elif mid*mid==x:
                 return mid
            else:
                left=mid+1
        print(count)
        return round(mid)
def findSqrt(num):
    toleranceLevel=0.1
    guess=num/2
    count=1
    print(guess)
    while abs(guess*guess-num) > toleranceLevel:
        count+=1
        guess= (guess + num/guess)/2
        print(guess)
    print(count)
    return math.floor(guess)
num=int(input())
print(mySqrt(num))
print(findSqrt(num))