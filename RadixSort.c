#include <stdio.h>
#define SIZE 6

int findMax(int a[])
{
    int max, i;
    max = a[0];
    for (i = 1; i < SIZE; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max; // 765
}

int countDigit(int max)
{
    int count = 0;

    while (max > 0)
    {
        max = max / 10; // 0
        count++;
    }
    return count;
}

int main()
{
    int a[] = {765, 45, 34, 56, 78, 9};
    // max
    int max, i, j;
    int totalDigit;
    int x;
    int digit;
    int count[10] = {0};
    int opt[SIZE] = {0};
    int p;

    // find out the max
    max = findMax(a);
    printf("\nMax = %d", max);
    totalDigit = countDigit(max); // 3
    printf("\nTotal Digit = %d\n", totalDigit);
    x= 1;
    for (p = 1; p <= totalDigit; p++)
    {
        // array -> count 0:0 1:0 2:0 3:0 4:1 5:2 6:1 7:0 8:1 9:1
        for(i=0;i<10;i++){
            count[i] = 0; 
        }

        for (i = 0; i < SIZE; i++) //{765, 45, 34, 56, 78, 9}
        {
            digit = (a[i]/x) % 10; // 5
            count[digit]++;    //[0,1,2,3,4:1,5:2,6:1,7,8:1,9:1]
        }

        printf("\n%d count => ",p);
        for (i = 0; i < 10; i++)
        {
            printf(" %d", count[i]);
        }
        //[0:0,1:0,2:0,3:0,4:1,5:3,6:4,7:4,8:5,9:6]
        for (i = 1; i < 10; i++)
        {
            count[i] = count[i] + count[i - 1];
        }

     
        printf("\nCount => ");
        for (i = 0; i < 10; i++)
        {

            printf(" %d", count[i]);
        }

        for (i = SIZE - 1; i >= 0; i--)
        {
            digit = (a[i]/x) % 10; // 9
            // printf("\nAssign %d %d",a[i],count[digit]);
            opt[ count[digit] - 1] = a[i];
            count[digit]--;
        }
        printf("\nOPT => ");
        for (i = 0; i < SIZE; i++)
        {

            printf(" %d", opt[i]);
            a[i] =opt[i];
        }

        x = x * 10; 
    }
    // a => 765  45 34 56 78 9

    // 34 765 45 56 78 9

    return 0;
}