/*WAP to insert delete to an array */
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

void search(int arr[100],int element,int limit)
{
    int found=0;
    for (int i=0;i<limit;i++)
    {
        if (arr[i]==element)
        {
            printf("Element Is found \nAt position %d \n",i);
            found++;
            break;
        }
    }
    if (found==0){
        printf("Element not found ");
        
    }
}
void insert(int arr[100],int *limit)
{
    int position,element;
    printf("\nEnter the position to insert the element ");
    scanf("%d",&position);
    
   
    
    if (position>=0 && position<*limit)
    {   printf("Enter the element to insert ");
        scanf("%d",&element);
        printf("Limit before %d ",*limit);
        *limit=*limit+1;
        printf("Limit before %d ",*limit);
        for (int i=*limit-1;i>position;i--)
        {
            int temp;
            printf("\ni value %d ",i);
            arr[i]=arr[i-1];
            
        }
        arr[position]=element;
        
        
    }
    else
    {printf("Position entered is out of bound \n");
    }
}

void delete(int arr[100],int *limit)
{   int position;
    printf("\nEnter the position to delete the element ");
    scanf("%d",&position);
    if (position>=0 && position<*limit)
    {
        *limit=*limit-1;
        for (int i=position;position<*limit;position++)
        {
            arr[position]=arr[position+1];
        }
    }
    else{
    printf("Position out of bound ");
    }
}
    

void main()
{   int arr[]={1,2,3,4};
    int limit=4,i=0,choice;
    //printf("Enter the limit of the array ");
    //scanf("%d",&limit);
    //input(arr,limit); 
    display(arr,limit);
    while(i==0){
        printf("\n\nMENU\n1.Search the array\n2.Insert Element\n3.Delete an element\n4.Exit\nEnter your choice : ");
        scanf("%d",&choice);
        if (choice==1)
        {   int element;
            printf("Enter the element to search :");
            scanf("%d",&element);
            search(arr,element,limit);
        }
        else if (choice==2)
        {   printf("Array before insertion \n");    
            display(arr,limit);
            insert(arr,&limit);
            printf("Array after insertion \n");    
            display(arr,limit);
        }
        else if (choice==4)
        {
            printf("Program ending...\n");
            i=1;
        }
        else if (choice==3)
        {   printf("Array before deletion \n");    
            display(arr,limit);
            delete(arr,&limit);
            printf("Array after deletion \n");    
            display(arr,limit);
            
        }
        
        else{
        printf("WRONG ENTRY");
        }
        
    }
    
    
}
