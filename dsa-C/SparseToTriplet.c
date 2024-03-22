//It takes a sparse matrix and converts it into a triplet  matrix
#include<stdio.h>
int nonzero=0,tripletmatrix[50][50];  //global variable for easy use

// This function takes in a 2D array and its dimensions and fills it with user input 
void input(int row,int column,int a[50][50])
{   printf("Enter the number \n");
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("Row %d column %d  : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
}

//This function takes a 2D array and prints it out
void display(int row,int column,int a[50][50])
{   
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<column;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}


//This function takes a matrix and converts it into a triplet sparse matrix 
void triplet_sparse(int row,int column,int a[50][50])
{
    for (int i=0;i<row;i++)
    {   
        for (int j=0;j<column;j++)
        {
        if (a[i][j]!=0)
            {
                nonzero++;
                tripletmatrix[nonzero][0]=i;
                tripletmatrix[nonzero][1]=j;
                tripletmatrix[nonzero][2]=a[i][j];
                
            }
        }
    }
    tripletmatrix[0][0]=row;
    tripletmatrix[0][1]=column;
    tripletmatrix[0][2]=nonzero;
}

//MAIN
int main()
{
    int A[50][50],row,column;
    printf("Enter the row and column of the Sparse Matrix ");
    scanf("%d %d",&row,&column);

    input(row,column,A);
    /* Printing the original matrix A. */
    printf("\n Original Matrix A :\n");
    display(row,column,A);

   /* Calling the function triplet_sparse and then displaying the triplet matrix. */
    printf("\ntriplet matrix is :\n");
    triplet_sparse(row,column,A);
    //number of row in triplet marix=nonzero element + 1
    display(nonzero+1,3,tripletmatrix);
    
}

