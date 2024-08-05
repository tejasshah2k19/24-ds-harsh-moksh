#include <stdio.h>
#define SIZE 10
#include "BubbleSort.c"

void binarySearch(int a[], int search)
{
    int min = 0, max = SIZE - 1, mid;
    int isFound = 0; // not found

    while (min <= max)
    {
        mid = (min + max) / 2;

        if (a[mid] == search)
        {
            isFound = 1;
            break;
        }
        else if (search > a[mid])
        {
            min = mid + 1; // right
        }
        else
        {
            max = mid - 1; // left
        }
    }
    if (isFound == 1)
        printf("\n%d Found", search);
    else
        printf("\n%d eNot Found", search);
    
}
int main()
{

    int a[] = {23, 45, 67, 89, 87, 65, 43, 450, 6, 78};
    //
    // sorted
    printf("\nBefore Sort : ");
    display(a);
    bubbleSort(a);

    printf("\nAfter Sort : ");
    display(a);

    binarySearch(a, 10);   // not found
    binarySearch(a, 450);  // found
    binarySearch(a, 1000); // not found

    return 0;
}