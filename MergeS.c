#include <stdio.h>

int main()
{

    int a[] = {10, 20, 30, 40, 50};
    int b[] = {5, 15, 25, 35, 38};
    int c[10];

    int i = 0, j = 0, k = 0;

    while (i < 5 && j < 5)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < 5)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < 5)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    return 0;
}