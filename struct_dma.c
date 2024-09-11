#include <stdio.h>
#include <stdlib.h>

struct num
{
    int data;
    struct num *next;
};

int main()
{

    // 10 20 30 1000 5000 4000 600 90
    int i;
    struct num *p = NULL;

    for (i = 1; i <= 3; i++)
    {
        p = malloc(sizeof(struct num));
        printf("\nenter number");
        scanf("%d", &p->data);
    }

    printf("\n%d ", p->data); // 30
    return 0;
}