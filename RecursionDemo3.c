#include <stdio.h>

void print(int cnt)
{
    if (cnt != 0) //0 != 0 
    {
        cnt--;
        print(cnt);
    }
    printf(" %d", cnt);
}

int main()
{

    print(3); // 0 1 2 3 , 3 2 1 0 , 0 1 2 ,
    return 0;
}

//print(3):count->2{1p}
                        //print(2):cnt:1{1p}
                                            //print(1):cnt:0{1p}
                                                        //print(0):cnt:0

//0 0 1 2 