#include <stdio.h>

void print(int cnt) //               
{

    printf("\n%d ", cnt);//3 2 1  0
    if (cnt != 0)
    {
        cnt--;
        print(cnt);
    }
}

int main()
{

    print(3); // 
    return 0;
}
