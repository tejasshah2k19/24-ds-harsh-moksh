#include <stdio.h>
#include <stdlib.h>

struct edge
{
    int src;
    int dest;
    int cost;
};

int main()
{
    int totalEdges;
    int totalVertex;
    int i, j;
    int src, dest, cost;
    int *visited;
    struct edge *e;
    int init;

    printf("\nHow many vertex you have?");
    scanf("%d", &totalVertex);
    printf("\nHow many edges you want to store ? ");
    scanf("%d", &totalEdges); // 4

    e = calloc(totalEdges * 2, sizeof(struct edge)); // e[0]->src,dest  e[1]->src,dest ...... e[7]

    for (i = 0; i < totalEdges * 2; i++)
    {
        printf("\nEnter source and dest");
        scanf("%d%d", &src, &dest, &cost); // 1 2
        e[i].src = src;
        e[i].dest = dest;
        e[i].cost = cost;
        i++; // 1
        e[i].src = dest;
        e[i].dest = src;
        e[i].cost = cost;
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

    // sort

    // printf("\nEnter initila vertext");
    // scanf
    // init = 0;

    visited = calloc(totalVertex, sizeof(int));

    for (i = 0; i < totalEdges * 2; i++)
    {

        if (isVisited(e[i].src) == 0)
        {
            printf(" %d", e[i].src); // 0
            if (isVisited(e[i].dest) == 0)
            {
                // 1
            }
        }
    }

    return 0;
}