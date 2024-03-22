#include<stdio.h>
int b[50][50],nonzero=0;
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
	printf("\n ROW :%d COL:%d\n",row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf(" %d ",a[i][j]);
            
            
        }
        printf("\n");
        
    }
    
}

void triplet(int a[50][50],int row,int col)
{	
	for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           if (a[i][j]!=0)
           {
           		nonzero+=1;
           		b[nonzero][0]=i;
           		b[nonzero][1]=j;
           		b[nonzero][2]=a[i][j];
           		
           }  
        }  
    }
    b[0][0]=row;
    b[0][1]=col;
    b[0][2]=nonzero;
}
void main()
{
	//int a[50][50]={{0,0,1,0},{2,0,0,1},{3,0,0,0},{0,4,0,1},{5,0,0,1}};
	int a[50][50];
	int row,col;
	printf("Enter the row and column of the MAtrix ");
    scanf("%d %d",&row,&col);
    printf("Enter the Matrix A");
    input(a,row,col);
    disaplay(a,row,col);
    printf("Triplet is ");
    triplet(a,row,col);
    disaplay(b,nonzero+1,3);
   // triplet(a,row,col);
    
    
}
