#include <stdio.h>

void print(int cnt) //print(3):cnt:2 {1p}       print(2):cnt:1{1p}   print(1):cnt:0 
{
    
    cnt--;
    if (cnt > 0) // cnt > 0 -> true ->    
    {
        print(cnt);
    }
    printf(" %d", cnt);//0 1 2
}

int main()
{

    print(3); // 
    return 0;
}
 