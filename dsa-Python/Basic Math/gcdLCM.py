def findGCD(big,small):
    if small==0:
        return big
    return findGCD(small,big%small)
num1=int(input("Enter the first number : "))
num2=int(input("Enter the second number : "))
gcd=findGCD(num1,num2)
print("The GCD of", num1,"and", num2 ,"is",gcd)
print(f"The LCM {num1} and {num2} is {(num1*num2)//gcd}")