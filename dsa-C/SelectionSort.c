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

//It takes an array and its size as input and sorts the array in ascending order

void SelectionSort(int a[50], int limit)
{
    for (int i = 0; i < limit - 1; i += 1)
    { // Display(a,limit);
        int min = a[i];
        int loc = i;
        /* Finding the minimum element in the array. */
        for (int k = i + 1; k < limit; k++)
        {
            if (a[k] < min)
            {
                min = a[k];
                loc = k;
            }
        }
        /* Swapping the elements. */
        if (loc != i)
        {
            int temp = a[i];
            a[i] = a[loc];
            a[loc] = temp;
        }
        /* Printing the step by step process of the selection sort. */
        printf("STEP %d IS :- ",i+1);
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
    printf("\nSelectionSort\n");
    SelectionSort(array, limit);
    printf("\nSorted Array is \n");
    Display(array, limit);
    return 0;
}
