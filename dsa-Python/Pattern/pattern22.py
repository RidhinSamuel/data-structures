def print_pattern(n):
    # Upper half of the pattern
    for i in range(n, 0, -1):
        for j in range(n, 0, -1):
            print(max(i, j), end=" ")
        print()

    # Lower half of the pattern
    for i in range(2, n + 1):
        for j in range(n, 0, -1):
            print(max(i, j), end=" ")
        print()

# Define the size of the pattern
size = 4

# Call the function to print the pattern
print_pattern(size)
