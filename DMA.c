#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a; // 4byte -> implicit
    int *p;
    int *x;
    int i;
    // scan
    // print
    p = malloc(sizeof(int));
    x = calloc(5, sizeof(int)); // 5 elements *4 byte => 20 byte
    printf("\nEnter number");
    scanf("%d", &p);
    printf("\n%d", p);

    printf("\nEnter 5 values");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("\n5 values :");

    for (i = 0; i < 5; i++)
    {
       printf(" %d", x[i]);
    }

    return 0;
}
