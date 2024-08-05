#include <stdio.h>

int linearSearch(int a[], int search, int size)
{
    int found = 0; // false - not found
    // 40byte / 4byte => 40/4 => 10
    int i;
    for (i = 0; i < size; i++)
    {
        if (a[i] == search)
        {
            found = 1;
            break;
        }
    }

    return found;
}

int main()
{

    int a[] = {12, 34, 56, 78, 98, 765, 43, 21, 234, 567};
    int search;
    int size = sizeof(a) / sizeof(int);
    printf("\nWhich Element you want to search?");
    scanf("%d", &search);

    printf("\n%d", linearSearch(a, search, size)); // 21
}