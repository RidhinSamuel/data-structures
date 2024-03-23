from matrixAddition import *
def multiplyMatrices(mat1,mat2,row1,col1,row2,col2):
    pass
if __name__=="__main__":
    print("Enter the Matrix 1")
    row1=int(input("Enter the number of rows of Matrix 1"))
    col1=int(input("Enter the number of columns of Matrix 1"))
    row2=int(input("Enter the number of rows of Matrix 2"))
    col2=int(input("Enter the number of columns  of Matrix 2: "))
    if (col1!=row2):
        exit()
    
    mat1=readMatrix(row1,col1)
    print("\n\nDisplaying Matrix 1:")
    display(mat1,row1,col1,1)
    print("\nenter the matrix 2")
    mat2=readMatrix(row2,col2)
    print("\nDisplaying Matrix 2:\n")
    display(mat2,row2,col2,2)
    product,row,col=multiplyMatrices(mat1,mat2,row1,col1,row2,col2)