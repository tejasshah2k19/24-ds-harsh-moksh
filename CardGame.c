#include <stdio.h>
#include<stdlib.h>
#define SIZE 8
//           i
int masterD[] = {10, 5, 25, 22, 631, 63, 22, 9};
int playerA[SIZE]; //{  0   1 2 3 }
int playerB[SIZE]; //{0 1 2 3 }

void distribute()
{

    // playerA : 10 25 63 22

    // playerB : 5 22 63 9
    int i;
    int j = 0;
    int k = 0;

    for (i = 0; i < SIZE; i++)
    {
        if (i % 2 == 0)
        {
            // even
            playerA[j++] = masterD[i];
        }
        else
        {
            // odd
            playerB[k++] = masterD[i];
        }
    }
}

void display()
{
    // playerA print
    int i;
    printf("\nPlayerA Deck : ");
    for (i = 0; i < SIZE; i++)
    {
        if (playerA[i] == 0)
        {
            //    break;
        }
        printf(" %d", playerA[i]);
    }
    // playerB print

    printf("\nPlayerB Deck : ");
    for (i = 0; i < SIZE; i++)
    {
        if (playerB[i] == 0)
        {
            //    break;
        }
        printf(" %d", playerB[i]);
    }
}

void battle(int battleCount)
{
    int p1 = playerA[0]; // 10
    int p2 = playerB[0]; // 5

    int i;

    if (p1 == 0)
    {
        printf("\nPLAYER B WON THE GAME\n");
        exit(0);
    }
    else if (p2 == 0)
    {

        printf("\nPLAYER A WON THE GAME\n");
        exit(0);
    }


    // remove the 0th index from PlayerA
    for (i = 0; i < SIZE - 1; i++)
    {
        playerA[i] = playerA[i + 1];
    }

    // remove the 0th index from PlayerB
    for (i = 0; i < SIZE - 1; i++)
    {
        playerB[i] = playerB[i + 1];
    }

    // display(); // new state of both the player

    if (p1 > p2)
    { // 10 5
        printf("\nPlayerA won the battle:");
        for (i = 0; i < SIZE; i++)
        {
            if (playerA[i] == 0)
            {
                break;
            }
        }

        playerA[i] = p1;
        playerA[i + 1] = p2;
    }
    else
    {
        printf("\nPlayerB won the battle: ");
        for (i = 0; i < SIZE; i++)
        {
            if (playerB[i] == 0)
            {
                break;
            }
        }

        playerB[i] = p1;
        playerB[i + 1] = p2;
    }
}

int main()
{
    int i;
    distribute();
    
    for(i=1;i<=50;i++){
        battle(i);
    }
  

    return 0;
}