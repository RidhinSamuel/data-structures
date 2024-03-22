#include <stdio.h>
int limit;
// It takes an array and a limit as input and stores the elements in the array
void Input(int a[50], int limit)
{
    for (int i = 0; i < limit; i += 1)
    {
        printf("Enter the element ");
        scanf("%d", &a[i]);
    }
}

// It displays the elements of the array
void Display(int a[50], int limit)
{
    for (int i = 0; i < limit; i += 1)
    {
        printf("%d ", a[i]);
    }
}

void QuickSort(int a[50],int first,int last)
{
    int pivot,i,j,temp;
    if (first<last)
    {
        pivot=a[first];
        i=first;
        j=last;
        /*It is the part where the elements are swapped. */
        while (i<j)
        {
            while (a[i]<=pivot && i<last)
            {
                i++;
            }
            while(a[j]>=pivot && j>first)
            {
                j--;
            }
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                printf("PIVOT:%d I:%d J:%d \n",pivot,i,j);
                Display(a,limit);
                printf("\n");
            }
        }
        temp=a[first];
        a[first]=a[j];
        a[j]=temp;
        printf("PIVOT:%d I:%d J:%d \n",pivot,i,j);
        Display(a,limit);
        printf("\n");
        QuickSort(a,first,j-1);
        QuickSort(a,j+1,last);
        
    }
}
int main()
{
    int array[50], duplicate[50];
    printf("Enter the limit of the array ");
    scanf("%d", &limit);
    Input(array, limit);
    printf("\nThe elements are \n");
    Display(array, limit);
    printf("\nQuick Sort\n");
	QuickSort(array,0,limit-1);
    printf("\nSorted Array is :-");
	Display(array,limit);
    
}