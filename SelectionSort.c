#include <stdio.h>
#define SIZE 5

void display(int a[])
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", a[i]);
    }
}

void selectionSort(int a[])
{
    int i, j, tmp, min;

    for (i = 0; i < SIZE; i++)
    {
        min = i;
        for (j = i + 1; j < SIZE; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
}
int main()
{

    int a[] = {10, 25, 30, 44, 6};

    printf("\nArray Before Sorting : ");
    display(a);
    bubbleSort(a);
    printf("\nArray After Sorting : ");
    display(a);
    return 0;
}