#include <stdio.h>

struct student
{
    char name[30];//s
    char batch[10];
    int fees;
    int year;
    int completionYear;
};

int main()
{

    struct student s[500]; // dot operator
    int totalStudent;
    int i;

    printf("\nHow many students you want to enter?");
    scanf("%d", &totalStudent); // 4

    for (i = 0; i < totalStudent; i++)
    {
        printf("\nEnter student name and batch name");
        scanf("%s%s", &s[i].name, &s[i].batch);

        printf("\nEnter Fees And Year");
        scanf("%d%d", &s[i].fees, &s[i].year);
    }

    printf("\nName\tBatch\tFees\tYear");
    for (i = 0; i < totalStudent; i++)
    {
        printf("\n%s\t%s\t%d\t%d", s[i].name, s[i].batch, s[i].fees, s[i].year);
    }

    return 0;
}