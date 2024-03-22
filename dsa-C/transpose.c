#include<stdio.h>
void input(int a[50][50],int row,int col)
{   printf("Enter the element\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Row %d Column %d ",i+1,j+1);
            scanf("%d",&a[i][j]);
            
        }
        
    }
}
void disaplay(int a[50][50],int row,int col)
{   printf(" the Matrix is \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf(" %d ",a[i][j]);
            
            
        }
        printf("\n");
        
    }
    
}
void transpose(int a[50][50],int row,int col)
{
    int temp;
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        
    }
}
int main(){
    int a[50][50],row,col;
    printf("Enter the row and column of the MAtrix ");
    scanf("%d %d",&row,&col);
    printf("Enter the Matrix A");
    input(a,row,col);
    disaplay(a,row,col);
    
    printf("Transpose is ");
    transpose(a,row,col);
    disaplay(a,col,row);
    
