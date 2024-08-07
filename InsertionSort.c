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

void insertionSort(int a[])
{
    int i, j;
    int tmp;

    for (i = 1; i < SIZE; i++)
    {
        tmp = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > tmp)
            {
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
        }
        //
        a[j + 1] = tmp;
    }
}
int main()
{

    int a[] = {10, 25, 30, 44, 6};

    printf("\nArray Before Sorting : ");
    display(a);
    insertionSort(a);
    printf("\nArray After Sorting : ");
    display(a);
    return 0;
}