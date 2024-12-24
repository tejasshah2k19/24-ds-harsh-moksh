#include <stdio.h>
#include <stdlib.h>

struct edge
{
    int src;
    int dest;
};

int main()
{
    int totalEdges;
    int i, j;
    int src, dest;

    struct edge *e;

    printf("\nHow many edges you want to store ? ");
    scanf("%d", &totalEdges); // 4

    e = calloc(totalEdges * 2, sizeof(struct edge)); // e[0]->src,dest  e[1]->src,dest ...... e[7]

    for (i = 0; i < totalEdges * 2; i++)
    {
        printf("\nEnter source and dest");
        scanf("%d%d", &src, &dest); // 1 2
        e[i].src = src;
        e[i].dest = dest;
        i++; // 1
        e[i].src = dest;
        e[i].dest = src;
    }

    // source ---> 60
    //  60 --> 1 , 9

    printf("\nEnter source");
    scanf("%d", &src);

    for (i = 0; i < totalEdges * 2; i++)
    {
        if (e[i].src == src)
        {
            printf(" %d", e[i].dest);
        }
    }

    return 0;
}