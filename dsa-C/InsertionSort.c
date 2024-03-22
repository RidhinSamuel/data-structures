#include <stdio.h>
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
// It takes an array and its size as input and sorts the array using insertion sort
void InsertionSort(int a[50],int limit)
{	int j=0;
	for (int i = 1;i <=limit-1;i += 1)
	{
		int b=a[i];
		for (j =i-1; j>=0; j -= 1)
		{
			if(a[j]>b)
				a[j+1]=a[j];
			else
				break;
		}
		a[j+1]=b;
        printf("STEP %d IS :- ",i);
        Display(a,limit);
        printf("\n");
	}	
}
// MAIN
int main()
{
    int limit, array[50], duplicate[50];
    printf("Enter the limit of the array ");
    scanf("%d", &limit);
    Input(array, limit);
    printf("\nThe elements are \n");
    Display(array, limit);
    printf("\nInsertion Sort\n");
	InsertionSort(array,limit);
    printf("\nSorted Array is :-");
	Display(array,limit);
    
}
