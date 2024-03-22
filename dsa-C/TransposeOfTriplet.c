#include<stdio.h>
int b[50][50],c[50][50],q=1,nonzero;
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
{  // printf(" the Matrix is \n");
	//printf("\n ROW :%d COL:%d\n",row,col);
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

void transpose(int b[50][50],int row,int col)
{	//int q=1;
	c[0][0]=b[0][1];
	c[0][1]=b[0][0];
	c[0][2]=b[0][2];
	for (int i=0;i<=b[0][1]-1;i++)
	{
		for (int j=1;j<=b[0][2];j++)
		{
			if (b[j][1]==i)
			{	//printf("\n Q is %d ",q);
				c[q][0]=b[j][1];
				c[q][1]=b[j][0];
				c[q][2]=b[j][2];
				q++;
			}
		}
	}
	
	
}


void main()
{
	int a[50][50]={{0,0,1},{3,0,0},{0,4,0},{5,0,0}};
	//int a[50][50];
	int row=4,col=3;
	//printf("Enter the row and column of the MAtrix ");
   // scanf("%d %d",&row,&col);
   // printf("Enter the Matrix A");
   // input(a,row,col);
    printf("\n");
    disaplay(a,row,col);
	triplet(a,row,col);
	printf("Triplet is \n");
	disaplay(b,nonzero+1,3);
	printf("After Transpose Matrix is \n");
	transpose(b,nonzero+1,3);
	disaplay(c,q,3);
	
	
}
