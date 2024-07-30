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

void bubbleSort(int a[])
{
    int i, j, tmp;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
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