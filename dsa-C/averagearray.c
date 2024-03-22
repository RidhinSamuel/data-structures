/**
WAP to print the average in an array */
#include<stdio.h>
void input(int arr[100],int limit)
{
    for(int i=0;i<limit;i++)
    {
        printf("Enter the element ");
        scanf("%d",&arr[i]);
        
    }
}
void display(int arr[100],int limit)
{   printf("The array is : \n");
    for (int i=0;i<limit;i++)
    {
        printf("%d ",arr[i]);
    }
    printf(" ");
    
}

void average(int arr[100],int limit)
{   float sum=0;
    for(int i=0;i<limit;i++)
    {
        sum=sum+arr[i];
        
    }
    printf("\nSUM is %f \nAVERAGE IS %f",sum,sum/limit);
}


int main()
{
    int arr[100],limit;
    printf("Enter the limit of the array ");
    scanf("%d",&limit);
    input(arr,limit); 
    display(arr,limit);  
    average(arr,limit); 
}
