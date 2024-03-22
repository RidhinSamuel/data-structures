//WAP to find sum of two matrix
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

void sum(int a[50][50],int b[50][50],int row,int col)
{   
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            a[i][j]=a[i][j]+b[i][j];
            
            
        }
        
        
    }
    printf("SUM is \n");
    disaplay(a,row,col);
    
}
int main(){
    int a[50][50],row,col,b[50][50];
    printf("To find sum Both Matrix should have same row and column\n");
    printf("Enter the row and column of the MAtrix ");
    scanf("%d %d",&row,&col);
    printf("Enter the Matrix A");
    input(a,row,col);
    disaplay(a,row,col);
    printf("Enter the Matrix B");
    input(b,row,col);
    disaplay(b,row,col);
    sum(a,b,row,col);
    
    
    
    
    
    
}
