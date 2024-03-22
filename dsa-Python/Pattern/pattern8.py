# This code prompts the user to enter a limit and stores it in the variable `limit`. It then
# initializes the variable `count` to 1.
limit=int(input("Enter the limit "))
count=(limit*2)-1
for i in range(limit,-1,-1):
    print("  "*(limit-i)+"* "*count)
    count-=2
